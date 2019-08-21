/*
problem description:
https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
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

// Complete the breakingRecords function below.
int result[3]={0};
int* breakingRecords(int scores_count, int* scores, int* result_count) {

    int i, highest,highest_break=0,lowest,lowest_break=0;
    *result_count=2;

    highest=lowest=scores[0];
    for(i=0;i<scores_count;i++){
        if(scores[i]>highest){
            highest_break++;
            highest=scores[i];
        }
        if(scores[i]<lowest){
            lowest_break++;
            lowest=scores[i];
        }

    }
    result[0]=highest_break;
    result[1]=lowest_break;
    return result;
}
