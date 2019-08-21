/*
problem description:
https://www.hackerrank.com/challenges/mark-and-toys/problem
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

// Complete the maximumToys function below.
int maximumToys(int prices_count, int* prices, int k) {
    long i,j,counts=0;
    long amount=k,count=prices_count;
    long temp,sum=0;

    //arange in ascending order,add the sum,compare it
    for(i=0;i<(count-1);i++){
        for(j=i+1;j<count;j++){
            if(prices[i]>prices[j]){
                temp=prices[i];
                prices[i]=prices[j];
                prices[j]=temp;
            }
          
        }
        sum = sum + prices[i];
        if (sum < amount) {
            counts++;
        }else 
            break;
    }
    return counts;
}
