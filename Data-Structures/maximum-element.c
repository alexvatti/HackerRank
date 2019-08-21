/*
problem description:
https://www.hackerrank.com/challenges/maximum-element/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define STACK_MAX 100000
int stack_top=-1;
long max=-1;
long stack[STACK_MAX];

int stack_empty()
{
    if(stack_top==-1)
        return 1;
    else 
        return 0;
}

int top()
{
    int val;
    val=stack[stack_top];
    return val;
    
}

int push(long val){
    if(stack_top==STACK_MAX)
        return 0;
    else {
    if(val>= max) {
        //printf("true\n");
            stack_top++;
            stack[stack_top]=max;
        max=val;
    }
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
        if(val==max){
        max=stack[stack_top];
            stack_top--;
                
    }
        return val;
    }
}
long stack_max()
{
    return max;

}
