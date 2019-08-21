/*
problem description:
https://www.hackerrank.com/challenges/library-fine/problem
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

// Complete the libraryFine function below.
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    //before the due date,fine is zero
    if ((y2-y1)>0) {
        return 0;
    } else if (((y2-y1)==0) && ((m2-m1) > 0) ) {
        return 0;
    } else if (((m2-m1)==0) && ((d2 - d1) > 0)) {
         return 0;
    } else if (((y1 - y2) == 0) && ((m1 - m2) == 0)) {
      return 15*(d1-d2);
    } else if (((y1 - y2) == 0) && ((m1 - m2) > 0)) {
      return 500*(m1-m2);
    } else if ((y1 - y2) > 0){
        return 10000*(y1-y2);
    } else {
        return 0;
    }
}
