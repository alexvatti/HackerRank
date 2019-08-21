/*
problem description:
https://www.hackerrank.com/challenges/between-two-sets/problem
*/

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int getTotalX(int a_count, int* a, int b_count, int* b) {

    int total=0,i,j,k,flag=0;
    int min=0,max=0;
    min=a[a_count-1];
    max=b[0];

    //printf("min=%d max=%d\n",min,max);
    for(i=min;i<=max;i++){
        flag=0;
        for(j=0;j<a_count;j++){
            //printf("i=%d a[j]=%d %d\n",i, a[j], i%a[j]);
            if((i%a[j])!=0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            
            //printf("i=%d\n",i);
            for(k=0;k<b_count;k++){
                //printf("i=%d b[k]=%d %d\n",i, b[k], b[k]%i);
                if((b[k]%i)!=0){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0){
            //printf("i=%d\n",i);
            total++;
        }
    }
    return total;
}
