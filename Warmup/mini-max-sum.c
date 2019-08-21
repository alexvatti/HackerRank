/*
problem description:
https://www.hackerrank.com/challenges/mini-max-sum/problem
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

// Complete the miniMaxSum function below.
void miniMaxSum(int arr_count, int* arr) {
    long int i,j;
    long long temp;

    for (i = 0; i < (arr_count - 1); i++) {
        for (j = i + 1; j < arr_count; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%ld ",( arr[0] + arr[1] + arr[2] + arr[3]));
    printf("%ld", (arr[arr_count-4] + arr[arr_count - 3] + arr[arr_count - 2] +         arr[arr_count-1]));


}
