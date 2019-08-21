/*
problem description:
https://www.hackerrank.com/challenges/save-the-prisoner/problem
*/

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the saveThePrisoner function below.
int saveThePrisoner(int n, int m, int s) {

    long long j,k,l,ans;
    j=n;
    k=m;
    l=s;

    ans=(k+l-1);
    if(ans < j)
        return ans;
    else {
        if(ans%j==0)
            return j;
        else
            return(ans%j);
    }

}
