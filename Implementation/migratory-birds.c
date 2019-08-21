/*
problem description:
https://www.hackerrank.com/challenges/migratory-birds/problem
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

// Complete the migratoryBirds function below.
int visits[6]={0};
int migratoryBirds(int arr_count, int* arr) {
    int i,type,max_visit=0,visit_index=0;

    for(i=0;i<arr_count;i++){
            type=arr[i];
            switch(type){
                case 1: visits[1]++; break;
                case 2: visits[2]++; break;
                case 3: visits[3]++; break;
                case 4: visits[4]++; break;
                case 5: visits[5]++; break;
            }

    }
    for(i=1;i<=5;i++){
        if(visits[i]>max_visit){
            max_visit=visits[i];
            visit_index=i;
        }
    }
    return visit_index;
}
