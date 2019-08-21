/*
problem description:
https://www.hackerrank.com/challenges/strange-advertising/problem
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

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
    int shared=5,liked=2, Cumulative=2,i;

    for(i=2;i<=n;i++){
        shared=(shared/2)*3;
        liked=shared/2;
        Cumulative+=liked;

    }
    return Cumulative;
}

