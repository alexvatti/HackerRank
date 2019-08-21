/*
problem description:
https://www.hackerrank.com/challenges/maximizing-xor/problem
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

// Complete the maximizingXor function below.
int maximizingXor(int l, int r) {

    int i,j,total=0,max=0;

    for(i=l;i<=r;i++){
        for(j=i;j<=r;j++){
            total=(i ^ j); //xor total
            if(total > max) //compare and save the max
                max=total;
        }
    }
    return max;
}
