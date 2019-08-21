/*
problem description:
https://www.hackerrank.com/challenges/simple-array-sum/problem
*/

#include<assert.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* readline();
char** split_string(char*);

/*
 * Complete the simpleArraySum function below.
 */
int simpleArraySum(int ar_count, int* ar) {
    /*
     * Write your code here.
     */
     long int i=0,sum=0;
     for(i=0;i<ar_count;i++) {
         sum=sum+ar[i];
     }
     return sum;
}
