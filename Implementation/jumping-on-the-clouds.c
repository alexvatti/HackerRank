/*
problem description:
https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
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
int jumpingOnClouds(int c_count, int* c) {
    int i=0,count=0;
    for(i=0;i<c_count-1;i++){
        if(c[i+2]==0){
            i++;
            count++;
        }else if(c[i+1]==0){
            count++;
        }else {

        }

    }
    return (count);
}
