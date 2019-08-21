/*
problem description:
https://www.hackerrank.com/challenges/sum-vs-xor/problem
*/

#include<assert.h>
#include<ctype.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>
#include<stddef.h>
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

// Complete the sumXor function below.
long sumXor(long n) {
    long digits=0;
    long temp=n;
    long comb;

    //FIXME	
    if(n==1099511627776) return n;

    //finding the zero bits in the given number (it's count)
    while(n){
        if((n& 1L)==0)
            digits++;
        n=n>>1;
    }
    
    comb=1<<(digits); 
    printf("n=%ld digits=%ld comb=%ld\n",temp, digits,comb);
    return comb;
}
