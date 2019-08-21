/*
problem description:
https://www.hackerrank.com/challenges/recursive-digit-sum/problem
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

// Complete the superDigit function below.

int superDigit(char* n, int k) {

    long long int num=0,sum=0,i;

    for(i=0;i<strlen(n);i++){
        num+=(n[i]-0x30);
    }
    sum=num*k;

    while(!(sum>=1 && sum <=9)) {
        num=sum;
        sum=0;
        while(num){
            sum+=num%10;
            num=num/10;
        }
        //printf("sum=%ld\n",sum);
    }
    return sum;
}
