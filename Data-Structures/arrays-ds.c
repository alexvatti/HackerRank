/*
problem description:
https://www.hackerrank.com/challenges/arrays-ds/problem
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

int result[10000];
int* reverseArray(int a_count, int* a, int* result_count) {
    int i=0;
    for(i=0;i<a_count;i++){
        result[i]=a[a_count-i-1];
    }
    *result_count=a_count;
    return result;
}
