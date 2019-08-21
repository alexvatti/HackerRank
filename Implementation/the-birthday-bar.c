/*
problem description:
https://www.hackerrank.com/challenges/the-birthday-bar/problem
*/

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

// Complete the birthday function below.
int birthday(int s_count, int* s, int d, int m) {
    int i;
    int j=m;
    int sum=0,count=0;
    int k=0;

loop:    
    i=k;
    for(i=k;i<j;i++){
        sum += s[i];
    }
    if(sum==d)
        count++;
    sum=0;    
    if(j<s_count){
        k++;
        j++;
        goto loop;
    }    

    return count;
}
