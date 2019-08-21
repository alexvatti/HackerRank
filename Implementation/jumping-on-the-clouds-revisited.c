/*
problem description:
https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem
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

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(int c_count, int* c, int k) {
    int i;
    int e=100;

    for(i=k; ; i=i+k){
        if(i<c_count){
            if(c[i]==1)
                e=e-1-2;
            else if(c[i]==0)
                e=e-1;
            else {

            }
        }else {
            if(c[i%k]==1)
                e=e-1-2;
            else 
                e=e-1;
                break;

        }
    }
    return e;
}
