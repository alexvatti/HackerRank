/*
problem description:
https://www.hackerrank.com/challenges/kangaroo/problem
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

// Complete the kangaroo function below.
char* kangaroo(int x1, int v1, int x2, int v2) {

    long diff=0;
    if((x1>x2) && (v1>=v2))
        return "NO";
    else if((x2>x1) && (v2>=v1))
        return "NO";
    else {

        diff=abs(x1-x2);
        while(diff!=0){
            x1=x1+v1;
            x2=x2+v2;
            diff=abs(x1-x2);
            if(diff>100000)
                break;

        }
        if(diff==0)
            return "YES";
    }
    return "NO";
}
