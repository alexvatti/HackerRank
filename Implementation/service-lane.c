/*
problem description:
https://www.hackerrank.com/challenges/service-lane/problem
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

// Complete the serviceLane function below.
int min_val(int n,int *width, int low, int high)
{
    int min=width[low],i;

    for(i=low;i<=high;i++)
    {
        if(min >= width[i])
            min=width[i];
    }
    return min;
}
int final_result[1000];
int* serviceLane(int n, int *width, int cases_rows, int cases_columns, int** cases, int* result_count) {
    int i,j,k=0,index1,index2,min=0;

    *result_count=cases_rows;
    for(i=0;i<cases_rows;i++){
        index1=cases[i][0];
        index2=cases[i][1];
        min=min_val(n,width,index1,index2);
        //printf("ans=%d\n",min);
        final_result[k]=min;
        k++;
    }

    return &final_result[0];


}
