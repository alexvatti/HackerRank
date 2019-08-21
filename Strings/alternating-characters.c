/*
problem description:
https://www.hackerrank.com/challenges/alternating-characters/problem
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

// Complete the alternatingCharacters function below.
int alternatingCharacters(char* s) {
    long int count=0;
    long int len=0,i;

    len=strlen(s);
    for(i=0;i<(len-1);i++){
        if(s[i]==s[i+1])
            count++;
    }
    return count;
}
