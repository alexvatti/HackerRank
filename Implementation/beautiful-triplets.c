/*
problem description:
https://www.hackerrank.com/challenges/beautiful-triplets/problem
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

// Complete the beautifulTriplets function below.
int beautifulTriplets(int d, int arr_count, int* arr) {
    int i,j,k;
    int count=0,total_count=0;
    int flag=0;
    int first,second;

    for(i=0;i<arr_count-2;i++){
        first=arr[i];
        count=0;
        for(j=i+1;j<arr_count;j++){
            //printf("first=%d d=%d arr[j]=%d\n",first,d,arr[j]);
            if((first+d)==arr[j]){
                count++;
                first=arr[j];
            } 
            if(count==2){
                total_count++;
                count=0;
                break;
            }
        }
    }
    return total_count;
}
