/*
problem description:
https://www.hackerrank.com/challenges/angry-professor/problem
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

// Complete the angryProfessor function below.
char* angryProfessor(int k, int a_count, int* a) {
    int ontime=0,late=0,i;

    for(i=0;i<a_count;i++){
        if(a[i]<=0)
            ontime++;
        else
            late++;
    }
    if(ontime>=k)
        return "NO";
    else
        return "YES";
}
