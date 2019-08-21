/*
problem description:
https://www.hackerrank.com/challenges/correctness-invariant/problem
*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<assert.h>

void insertionSort(int N, int arr[]) {
    int i,j;
    int temp;

    for(i=0;i<(N-1);i++)
    {
        for(j=i+1;j<N;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }
    for(j=0;j<N;j++)
    {
        printf("%d",arr[j]);
        printf(" ");
    }
}
