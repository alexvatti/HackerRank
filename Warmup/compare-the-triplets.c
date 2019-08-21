/*
problem description:
https://www.hackerrank.com/challenges/compare-the-triplets/problem
*/

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

// Complete the compareTriplets function below.
int result_array[2];
int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    int i,a_win_count=0,b_win_count=0;

    for(i=0;i<a_count;i++){
        if(a[i]>b[i])
            a_win_count++;
        else if (a[i]<b[i])
            b_win_count++;
        else{

        }

    }
    *result_count=2;
    result_array[0]=a_win_count;
    result_array[1]=b_win_count;
    return &result_array[0];
}
