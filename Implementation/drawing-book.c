/*
problem description:
https://www.hackerrank.com/challenges/drawing-book/problem
*/

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
     int path1,path2;
     path1 = abs(0-p/2);
     path2 = abs(n/2 - p/2);

     if(path1 < path2)
        return path1;
    else
        return path2;
}
