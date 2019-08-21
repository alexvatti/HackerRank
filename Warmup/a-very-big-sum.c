/*
problem description:
https://www.hackerrank.com/challenges/a-very-big-sum/problem
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
char** split_string(char*);

// Complete the aVeryBigSum function below.
long aVeryBigSum(int ar_count, long* ar) {
    long long int i=0;
    long long int sum=0;

    for(i=0;i<ar_count;i++) {
        sum=sum+(long long int)ar[i];
    }
    return sum;
}
