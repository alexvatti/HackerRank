/*
problem description:
https://www.hackerrank.com/challenges/and-product/problem
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

// Complete the andProduct function below.
long andProduct(long a, long b) {
    long i,product=a;

    for(i=1;(a+i)<=b;i=i*2)
        product= product & (a+i);
    if((a+i)>b)
        product= product & b;
    return product;
}
