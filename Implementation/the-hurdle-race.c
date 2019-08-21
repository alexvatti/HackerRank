/*
problem description:
https://www.hackerrank.com/challenges/the-hurdle-race/problem
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

// Complete the hurdleRace function below.
int hurdleRace(int k, int height_count, int* height) {
    int i,max;
    max=height[0];

    for(i=1;i<height_count;i++){
        if(max < height[i])
            max=height[i];
    }
    if(max > k)
        return (max-k);
    else 
        return 0;
}
