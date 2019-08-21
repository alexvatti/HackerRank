/*
problem description:
https://www.hackerrank.com/challenges/diagonal-difference/problem
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
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int i,j=0,k,sum1=0,sum2=0;
    k=(arr_columns-1);

    for(i=0;i<arr_rows;i++){
        if(j<arr_columns){
            sum1+=arr[i][j];
            j++;
        }

        if(k>=0){
            sum2+=arr[i][k];
            k--;
        }
    }
    printf("sum1=%d sum2=%d\n",sum1,sum2);
    return(abs(sum1-sum2));
}
