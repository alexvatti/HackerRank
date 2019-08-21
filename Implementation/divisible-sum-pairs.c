/*
problem description:
https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
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

// Complete the divisibleSumPairs function below.
int divisibleSumPairs(int n, int k, int ar_count, int* ar) {
    int i,j,count=0,sum;

    for(i=0;i<(n-1);i++) {
        for(j=i+1;j<n;j++){
            sum=ar[i]+ar[j];
            if(sum%k==0)
                count++;

        }
    }
    return count;
}
