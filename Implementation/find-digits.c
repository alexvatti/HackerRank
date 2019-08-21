/*
problem description:
https://www.hackerrank.com/challenges/find-digits/problem
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

// Complete the findDigits function below.
int findDigits(int n) {
    int arr[10]={};
    int i,j;
    int temp,count=0;

    temp=n;
    i=0;
    while(temp!=0) {
        arr[i] =temp%10;
        temp=temp/10;
        i++;
    }
    for(j=0;j<i;j++) {
        printf("digit=%d\n",arr[j]);
        if(arr[j]==0) continue;
        else {
            if(n%arr[j]==0)
                count++;
        }
    }
    return count;
}
