/*
problem description:
https://www.hackerrank.com/challenges/birthday-cake-candles/problem
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

// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(int ar_count, int* ar) {
    long int i = 0,largest_val,count=0;

    largest_val = ar[0];

    for (i = 1; i < ar_count; i++) {
        if (largest_val < ar[i])
            largest_val= ar[i];
    }

    for (i = 0; i < ar_count; i++) {
        if (largest_val == ar[i])
        count++;
    }

    printf("%ld\n",count);
    return count;

}
