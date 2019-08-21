/*
problem: description:
https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
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

// Complete the beautifulDays function below.
int reverse_num(int n){
    int sum=0,r;

    while(n){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    return sum;
}
int beautifulDays(int i, int j, int k) {
    int rev_num=0,num,count=0;

    for(num=i;num<=j;num++){
        rev_num=reverse_num(num);
        if((abs(num-rev_num)%k)==0)
            count++;
    }
    return count;
}
