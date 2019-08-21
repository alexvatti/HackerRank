/*
problem description:
https://www.hackerrank.com/challenges/runningtime/problem
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

// Complete the runningTime function below.
int runningTime(int arr_count, int* arr) {
    int swift_count=0;
    int i,j,k,temp;
loop:
    for(i=0;i<(arr_count-1);i++){
        for(j=i+1;j<arr_count;j++){
            if(arr[i]>arr[j]){
                
                temp=arr[j];
                //printf("\n j=%d i=%d\n",j,i);
                for(k=j;k>i;k--){
                    arr[k]=arr[k-1];
                    swift_count++;
                }
                arr[i]=temp;
                break;
                
            }else
                continue;
        }
        
    }
    for(k=0;k<(arr_count-1);k++){
        if(arr[k]>arr[k+1])
            goto loop;
    }
    return (swift_count);
}
