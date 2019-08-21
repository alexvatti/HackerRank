/*
problem description:
https://www.hackerrank.com/challenges/almost-sorted/problem
*/
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

int is_array_sorted(int f,int l, int *arr, int *pos,int *first_fail,int *last_fail)
{
    int i;
    int pass_count=0,fail_count=0;
    int status=0;
    *first_fail=-1;
    *last_fail=-1;

    for(i=f;i<l;i++){
        if(arr[i]<arr[i+1])
        {
            pass_count++;
        }else {
            status=-1;
            if(*first_fail==-1){
                *first_fail=i;
            }else
                *last_fail=i;
            fail_count++;
            
        }
    }
 
    if(status==-1){
        return -1;
    } else 
        return 0;
}

void swap_fun(int *ptr1,int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
void rotate_fun(int *ptr1,int *ptr2)
{
    int temp;
    while(ptr1 < ptr2){
        temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
        ptr2--;
        ptr1++;
    }   
}

// Complete the almostSorted function below.
void almostSorted(int arr_count, int* arr) {
    int first=0;
    int last=arr_count-1;
    int count=last+1;
    int status=-1;
    int pos,fail_first,fail_last;
    int l,r;

    status=is_array_sorted(first,last,arr,&pos,&fail_first,&fail_last);
    if(status==0){
        printf("yes\n");
        return;
    } else {
        if(count==2){
            swap_fun(&arr[0],&arr[1]);
            status=is_array_sorted(first,last,arr,&pos,&fail_first,&fail_last);
            if(status==0){
                printf("yes\n");
                printf("swap %d %d\n",first+1,last+1);
                return;
            }
        } else {
            l=fail_first;
            if(fail_last!=-1) 
                r=fail_last+1;
            else
                r=l+1;
               
            swap_fun(&arr[l],&arr[r]);
            status=is_array_sorted(first,last,arr,&pos,&fail_first,&fail_last);
            if(status==0){
                printf("yes\n");
                printf("swap %d %d\n",l+1,r+1);
                return;
            }
            swap_fun(&arr[l],&arr[r]);
            rotate_fun(&arr[l],&arr[r]);
            status=is_array_sorted(first,last,arr,&pos,&fail_first,&fail_last);
            if(status==0){
                printf("yes\n");
                printf("reverse %d %d\n",l+1,r+1);
                return;
            }
            printf("no\n");
            return;
        }
    }
}
