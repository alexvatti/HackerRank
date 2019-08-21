/*
Problem Description:
https://www.hackerrank.com/challenges/lonely-integer/problem
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

// Complete the lonelyinteger function below.
int lonelyinteger(int a_count, int* a) 
{

    int i,j,flag=0;

    for(i=0;i<(a_count-1);i++)
    {
        for(j=i+1;j<a_count;j++)
	{
            if(a[j]==-1) continue;
            if((a[i]^a[j])==0)
	    {
                a[j]=-1;
                a[i]=-1;
                break;
            }
        }
        if(a[i]!=-1) return a[i];
    }
    return a[i];
}

