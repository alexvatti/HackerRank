/*
problem description:
https://www.hackerrank.com/challenges/icecream-parlor/problem
*/

#include<assert.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>
#include<stddef.h>
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* readline();
char** split_string(char*);

// Complete the icecreamParlor function below.
int result_array[2];
int* icecreamParlor(int m, int arr_count, int* arr, int* result_count) {
    int i,j;
    
    //array is already in ascending order,just computing 
    for(i=0;i<arr_count-1;i++){
        for(j=i+1;j<arr_count;j++)
            if(arr[i]+arr[j]==m){
                result_array[0]=i+1;
                result_array[1]=j+1;
                *result_count=2;
                return &result_array[0];
            }
    }
    *result_count=2;
    return &result_array[0];
}
