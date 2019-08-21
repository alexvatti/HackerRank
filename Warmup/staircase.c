/*
problem description:
https://www.hackerrank.com/challenges/staircase/problem
*/

#include<assert.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>
#include<stddef.h>
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* readline();

// Complete the staircase function below.
void staircase(int n) {
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");

        }
        for(;j<=n;j++){
            printf("#");

        }
        printf("\n");
    }
}
