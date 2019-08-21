/*
problem description:
https://www.hackerrank.com/challenges/chocolate-feast/problem
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

// Complete the chocolateFeast function below.
int chocolateFeast(int n, int c, int m) {
    int num_cholocates=0,extra_cholocates=0,count=0,init_cholocates=0;

    num_cholocates = n/c;
    init_cholocates = n/c;

   if(num_cholocates < m) {
        return (num_cholocates);
    } else if (num_cholocates == m) {
        return (num_cholocates+1);
    } else {
        while (num_cholocates >= m){
            extra_cholocates=(num_cholocates/m);
            count=count+ extra_cholocates;
            extra_cholocates=extra_cholocates+(num_cholocates%m);
            num_cholocates=extra_cholocates;
        }
        return (init_cholocates+count);
    }
    return 0;
}
