/*
problem description:
https://www.hackerrank.com/challenges/the-love-letter-mystery/problem
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

// Complete the theLoveLetterMystery function below.
int theLoveLetterMystery(char* s) {

    int len=strlen(s);
    int min,max;
    int count=0;

    min=0,max=len-1;
    //printf("len=%d\n",len);
    while((len/2) >=1){
        //printf("min=%d\n",s[min]);
        //printf("max=%d\n",s[max]);
        count+=abs(s[min]-s[max]);
        min=min+1;
        max=max-1;
        len=len-2;

    }
    //printf("count=%d\n",count);
    return count;
}
