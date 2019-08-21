/*
problem description:
https://www.hackerrank.com/challenges/the-great-xor/problem
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

// Complete the theGreatXor function below.
long theGreatXor(long x) {
    long num=0;
    int count=0;
    while(x){
        if((x&1L)==0){
            num+=pow(2,count);
            count++;
        }else 
            count++;
     
        x=x>>1;
    }
    printf("num=%ld\n",num);
    return num;
}
