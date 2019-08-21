/*
problem description:
https://www.hackerrank.com/challenges/counting-valleys/problem
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

// Complete the countingValleys function below.
int countingValleys(int n, char* s) {
    long int i,count=0,v=0;

    for(i=0;i<n;i++){
        if(*s=='U') {
            count++;
            printf("positive count=%d\n",count);
        } else if(*s=='D'){
           count--;
           printf("negative count=%d\n",count);
        } 
        else {

        }
        if((count==0) && (*s=='U'))
            v++;
        s++;
    }
    printf("count of V=%ld\n",v);
    return v;

}

