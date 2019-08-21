/*
problem description:
https://www.hackerrank.com/challenges/largest-rectangle/problem
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

#define STACK_MAX 10000
int stack_top=-1;
int stack[STACK_MAX];

int stack_empty()
{
    if(stack_top==-1)
        return 1;
    else 
        return 0;
}
int push(int val){
    if(stack_top==STACK_MAX)
        return 0;
    else {
        stack_top++;
        stack[stack_top]=val;
        return 1;
    }
}

int pop()
{
    int val;
    if(stack_top==-1)
        return 1;
    else {
        val=stack[stack_top];
        stack_top--;
        return val;
    }
}
int top()
{
    int val;
    val=stack[stack_top];
    return val;
}
// Complete the largestRectangle function below.


long largestRectangle(int n, int* h) {
    long int i,j,area=-1,max_area=-1,left;
    stack_top=-1;
    
    for(i=0;i<=n;i++){
        while((stack_top>=0) &&((i==n)||h[top()]>h[i])){
            if(stack_top>0)
                left=stack[stack_top-1];
            else 
                left=-1;
            //printf("area=%ld stack_top=%d i=%ld left=%ld\n",area,stack_top,i,left);
            area=h[pop()]*(i-left-1);
            
            if(area>=max_area)
                max_area=area;
        }
        if(i<n){
            push(i);
        }

    }
    return max_area; 
}
