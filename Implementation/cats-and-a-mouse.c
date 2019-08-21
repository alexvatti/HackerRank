/*
problem description:
https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
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

// Complete the catAndMouse function below.
char* catAndMouse(int x, int y, int z) {
    char *p1 = "Cat A";
    char *p2 = "Cat B";
    char *p3 = "Mouse C";

    if(abs(x-z) == abs(y-z))
        return p3;
    else if(abs(x-z)<abs(y-z))
        return p1;
    else
        return p2;
}
