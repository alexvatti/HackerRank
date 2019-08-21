/*
problem description:
https://www.hackerrank.com/challenges/bigger-is-greater/problem
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

// Complete the biggerIsGreater function below.
void str_asending_order(char *str)
{
    int i,j,l;
    char ch;

    l=strlen(str);
    for(i=1;i<l;i++)
        for(j=0;j<l-i;j++)
        if(str[j]>str[j+1])
        {
            ch=str[j];
            str[j] = str[j+1];
            str[j+1]=ch;
        }
}   
int find(char *dest, char *source,int count,int *pos) {

    int max_count=0,min_count=0,i=0;

    for(i=0;i<count;i++){
        if(*dest >= *source){
            max_count++;
        } else {
            min_count--;
            *pos=i;
        }
        source++;
    }
    if(max_count==count)
        return 1;
    else 
        return min_count;

    return -1;
}
void swap(char *ptr1, char *ptr2){
    char temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}

char *no="no answer";

char* biggerIsGreater(char* w) {
    int string_length=strlen(w);
    char *dest_str,*sub_str;
    int i,greater_equal_count=0,count;
    char *d=w;
    int pos=0;

    if(string_length <= 1)
        return no;
    else {
        for(i=string_length-2;i>=0;i--){
            dest_str=&w[i];
            sub_str=&w[i+1];
            count=strlen(sub_str);
            greater_equal_count=find(dest_str,sub_str,count,&pos);
            if(greater_equal_count<=-1){
                if(count==1) {
                    swap(dest_str,sub_str);
                    return d;
                } else {
                     swap(dest_str,&sub_str[pos]);
                     str_asending_order(sub_str);
                     return d;
                }

            }
        }
        return no;
    
    }
    return no;
}
