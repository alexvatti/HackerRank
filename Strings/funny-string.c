/*
problem description:
https://www.hackerrank.com/challenges/funny-string/problem
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

// Complete the funnyString function below.
char* funnyString(char* s) {

    int len=strlen(s),i,j;
    int initial_string[10000];
    int rotated_string[10000];
    int t1,t2;

    for(i=0,j=len-1;i<len;i++,j--){
        initial_string[i]=s[i];
        rotated_string[i]=s[j];
    }

    for(i=0;i<len-1;i++){
        t1=abs(rotated_string[i]-rotated_string[i+1]);
        t2=abs(initial_string[i]-initial_string[i+1]);
        if(t1==t2) {

        }else 
            return "Not Funny";
    }
    return "Funny";
}
