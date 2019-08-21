/*
problem description:
https://www.hackerrank.com/challenges/sock-merchant/problem
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

// Complete the sockMerchant function below.
int sockMerchant(int n, int ar_count, int* arr) {

    int pair_count=0,i,j;

    for(i=0;i<(ar_count-1);i++){
        if(arr[i]==-1)
            continue;
        for(j=i+1;j<ar_count;j++){
            if(arr[i]==arr[j]){
                pair_count++;
                arr[j]=-1;
                break;
            }
        }
    }
    return pair_count;
}
