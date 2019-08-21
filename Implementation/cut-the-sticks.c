/*
problem description:
https://www.hackerrank.com/challenges/cut-the-sticks/problem
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

// Complete the cutTheSticks function below.
int min_value(int *arr, int count){
    int i,j,min=1000;

    for(i=0;i<count;i++){
        if(min > arr[i] && arr[i]!=0)
            min=arr[i];
    }
    return min;
}
int cut_sticks(int *arr,int count,int min){
    int i,final_count=0,val;
    for(i=0;i<count;i++){
        if(arr[i]!=0){
            val=arr[i]-min;
            arr[i]=val;
        }
        if(arr[i]!=0) final_count++;
    }
    return final_count;
}
int output_result[10000];
int* cutTheSticks(int arr_count, int* arr, int* result_count) {

    int  min,count=arr_count;
    int i=0;

    while(1){
        output_result[i]=count;
        printf("i=%d count=%d\n",i,count);
        min=min_value(&arr[0],arr_count);
        printf("i=%d count=%d min=%d\n",i,count,min);
        count=cut_sticks(&arr[0],arr_count,min);
        
        i++;
        if(count==0) break;
        
    }
    
    *result_count=i;
    return output_result;
}
