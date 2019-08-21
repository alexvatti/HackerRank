/*
problem description:
https://www.hackerrank.com/challenges/strange-code/problem
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

// Complete the strangeCounter function below.
long strangeCounter(long t) {

    long m=3;
    if(t<=m) return (m-t+1);
    while(1) {
        if(t<=m) return(m-t+1);
        else if(t>m) {
            m= (m*2) +3;
        } else {

        }
    }

    return (m-t+1);
}
