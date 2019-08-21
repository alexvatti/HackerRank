/*
problem description:
https://www.hackerrank.com/challenges/two-arrays/problem
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

// Complete the twoArrays function below.

char* twoArrays(int k, int A_count, int* A, int B_count, int* B) {
    int i,j,temp;
    //arrange in assending order
    for(i=0;i<(A_count-1);i++) {
        for(j=i+1;j<A_count;j++){
            if(A[i]>A[j]){
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    //arrange in decending order
    for(i=0;i<(B_count-1);i++) {
        for(j=i+1;j<B_count;j++){
            if(B[i]<B[j]){
                temp=B[i];
                B[i]=B[j];
                B[j]=temp;
            }
        }
    }
    //sum it,compare with k
    for(i=0;i<(B_count);i++){
        if((A[i]+B[i])>=k)
            continue;
        else 
            return "NO";
    }
    return "YES";
}
