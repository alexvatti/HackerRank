/*
problem description:
https://www.hackerrank.com/challenges/utopian-tree/problem
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

// Complete the utopianTree function below.
int utopianTree(int n) {

    if(n==0)
        return 1;
    else if(n==1)
        return 2;
    else {
        if(n%2==0)
            return(utopianTree(n-1)+1);
        else 
            return(utopianTree(n-1)*2);
    }
}
