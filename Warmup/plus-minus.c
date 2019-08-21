/*
problem description:
https://www.hackerrank.com/challenges/plus-minus/problem
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

// Complete the plusMinus function below.
void plusMinus(int arr_count, int* arr) {
    long int positive=0,negative=0,zero=0;
    long int i=0;

    for(i=0;i<arr_count;i++) {
        if(arr[i] > 0) 
		positive++;
        else if(arr[i] < 0) 
		negative++;
        else 
        	zero++;
    }
    printf("%f\n", ((float)positive / arr_count));
    printf("%f\n", ((float)negative / arr_count));
    printf("%f\n", ((float)zero / arr_count));

}
