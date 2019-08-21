/*
problem description:
https://www.hackerrank.com/challenges/crush/problem
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

// Complete the arrayManipulation function below.
long int values[10000000]={0};
long arrayManipulation(int n, int queries_rows, int queries_columns, int** queries) {
    long int i,j,max=0,a,b,k,val=0;
    int m=queries_rows;

    for(i=0; i<m; i++){
        a = queries[i][0];
        b = queries[i][1];
        k = queries[i][2];
        values[a-1]+=k;
        if(b<n) values[b]-=k;
    }

    for(j=0; j<n; j++){
        val+=values[j];
        if(val > max) max = val;
    }

    printf("max=%ld\n",max);
    return max;
}
