/*
problem description:
https://www.hackerrank.com/challenges/camelcase/problem
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

// Complete the camelcase function below.
int camelcase(char* s) {
    int count=1;
    int i;

    for(i=0;i<strlen(s);i++){
        if(s[i]>='A' && s[i]<='Z')
            count++;
    }
    return count;
}

