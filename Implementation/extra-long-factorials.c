/*
problem description:
https://www.hackerrank.com/challenges/extra-long-factorials/problem
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

int multiply(int x, char res[], int res_size) 
{ 
    int carry = 0;  // Initialize carry 
    int i=0;
    int prod;

    for (i=0; i<res_size; i++) 
    { 
        prod = res[i] * x + carry; 
         // Store last digit of 'prod' in res[]   
        res[i] = prod % 10;   
         // Put rest in carry 
        carry  = prod/10;     
    } 
  
    // Put carry in res and increase result size 
    while (carry) 
    { 
        res[res_size] = carry%10; 
        carry = carry/10; 
        res_size++; 
    } 
    return res_size; 
} 
// Complete the extraLongFactorials function below.
#define MAX 200
void extraLongFactorials(int n) {
    int i;
    int extra_size = 1; 
    char res[MAX]; 
  
    res[0] = 1; 
    
    for (i=2; i<=n; i++) 
        extra_size = multiply(i, res, extra_size); 
  
    for (i=extra_size-1; i>=0; i--) 
        printf("%d",res[i]);
    
}
