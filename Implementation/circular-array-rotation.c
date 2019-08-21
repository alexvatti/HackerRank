/*
problem description:
https://www.hackerrank.com/challenges/circular-array-rotation/problem
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

// Complete the circularArrayRotation function below.
int output_array[150000];
int* circularArrayRotation(int a_count, int* a, int k, int queries_count, int* queries, int* result_count) {
    int i,j=0,l=k;
    long index;
    int n=a_count;
    int m;

    
        
    if(a_count==k){
        for(i=0;i<queries_count;i++){
            index=queries[i];
            output_array[i]=a[index];
            printf("%d\n",output_array[i]);
        }
    }else if(a_count>k) {
        for(i=0;i<queries_count;i++){
            index=queries[i];
            m=index;
            output_array[i]=a[(n-k+m)%n];
            printf("%d\n",output_array[i]);
        }
    } else {
        l=k/a_count;
        k=k-(l*a_count);
        for(i=0;i<queries_count;i++){
            index=queries[i];
            m=index;
            output_array[i]=a[(n-k+m)%n];
            printf("%d\n",output_array[i]);
        }

    }
    *result_count=queries_count;
    return &output_array[0];
}
