/*
problem description:
https://www.hackerrank.com/challenges/sherlock-and-squares/problem
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

// Complete the squares function below.
int squares(int a, int b) {
   int count=0,i,temp;
   int c=sqrt(a),d=sqrt(b);
   for(i=c;i<d;i++){
       count++;
   }
   temp=(c*c);
   if(temp==a)
        count++;
   return count;
}
