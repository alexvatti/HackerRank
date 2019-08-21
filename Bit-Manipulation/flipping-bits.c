/*
problem description:
https://www.hackerrank.com/challenges/flipping-bits/problem
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

// Complete the flippingBits function below.
long flippingBits(long n) {

    unsigned int m=~n;//toggle all the bits ,then store in unsinged int
    return(m);
}
