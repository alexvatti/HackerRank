/*
problem description:
https://www.hackerrank.com/challenges/candies/problem
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

// Complete the candies function below.
int candi[100000]={0};
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
long candies(int n, int arr_count, int* arr) {
    long count=0;
    int i;

    candi[0]=1;
    for(i=1;i<=(arr_count-1);i++)
    {
        candi[i]=1;
        if(arr[i] > arr[i-1])
        {
            candi[i]=candi[i-1]+1;
        }
    }
   
    for(i=arr_count-1;i>=1;i--)
    {
        if(arr[i] < arr[i-1]){
            candi[i-1]=max(candi[i-1],candi[i]+1);
        }
    }
    for(i=0;i<arr_count;i++)
        count+=candi[i];
   
    return count;
}



