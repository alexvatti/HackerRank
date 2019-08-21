/*
problem description:
https://www.hackerrank.com/challenges/bon-appetit/problem
*/

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

// Complete the bonAppetit function below.
void bonAppetit(int bill_count, int* bill, int k, int b) {
    int i,actual=b,shared=0,overcharged=0;

    for(i=0;i<bill_count;i++){
        if(i==k) continue;
        else {
            shared+=bill[i];
        }
    }
    shared=shared/2;
    overcharged=actual-shared;
    if(overcharged==0)
        printf("Bon Appetit\n");
    else
        printf("%d\n",overcharged);

}
