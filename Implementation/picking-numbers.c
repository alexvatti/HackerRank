/*
problem description:
https://www.hackerrank.com/challenges/picking-numbers/problem
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
 * Complete the 'pickingNumbers' function below.
 */
int find(int a, int b){
    int diff=a-b;
    return diff;
}
int pickingNumbers(int a_count, int* a) {
    int i,j,diff,array_count=0;
    int max_array_count=0;

    for(i=0;i<a_count;i++){
        array_count=0;
        for(j=0;j<a_count;j++){
            if(i==j) continue;
            diff=find(a[i],a[j]);
            if((diff==1) || (diff==0) )
                array_count++;
        }
        if(array_count >= max_array_count)
            max_array_count=array_count;
    }
    return (max_array_count+1);

}
