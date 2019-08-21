/*
problem description:
https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem
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

// Complete the hackerrankInString function below.
char* hackerrankInString(char* s) {
    char h[]="hackerrank";
    int t_len,s_len,i=0,j=0;
    s_len=strlen(s);
    t_len=strlen(h);

    for(i=0;i<s_len;i++)
    {
        if(s[i]==h[j])
        {
            j++;
        }
    }
    if(j==t_len)
        return "YES";
    else 
        return "NO";
}
