/*
problem description:
https://www.hackerrank.com/challenges/taum-and-bday/problem
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
 * Complete the 'taumBday' function below.
 */

long taumBday(int b, int w, int bc, int wc, int z) {
    long amount1=0,amount2=0,amount3=0;
    long bc_cost=bc;
    long wc_cost=wc;
    long zc_cost=z;
    long b_count=b;
    long w_count=w;

    amount1= ((b_count*bc_cost)+(w_count*wc_cost));
    amount2=((b_count+w_count)*bc_cost) +  (w_count*zc_cost);
    amount3=((b_count+w_count)*wc_cost) +  (b_count*zc_cost);

    if(amount1< amount2) {
        if(amount1 < amount3){
            return amount1;
        } else {
            return amount3;
        }
    } else {
        if(amount2 < amount3){
            return amount2;
        } else {
            return amount3;
        } 
    }

    return amount1;
}
