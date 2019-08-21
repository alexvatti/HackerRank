/*
problem description:
https://www.hackerrank.com/challenges/halloween-sale/problem
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

// Complete the howManyGames function below.
int max_val(int p,int m)
{
    if(p > m)
        return p;
    else 
        return m;
}
int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy
    int init_cost=p,spend=s,count=0,cost=0;
    
    if(s < init_cost) 
        return 0;
    else if (s==init_cost)
        return 1;
    else {
        while(spend >= 0){
            cost=max_val(p,m);
            spend-=cost;
            p=p-d;
            count++;
        }

    }
    printf("spend=%d count=%d cost=%d\n",spend,count,cost);
    return (count-1);
}
