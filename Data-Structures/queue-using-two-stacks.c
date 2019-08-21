/*
problem description:
https://www.hackerrank.com/challenges/queue-using-two-stacks/problem
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define STACK_MAX 100000
int stack_top=-1;
int queue_front=-1;
long stack[STACK_MAX];

int stack_empty()
{
    if(stack_top==-1)
        return 1;
    else 
        return 0;
}

int push(long val){
    if(stack_top==STACK_MAX)
        return 0;
    else {
        stack_top++;
        stack[stack_top]=val;
        return 1;
    }
}

void pop()
{
    int val;
    if(stack_top==-1)
        return;
    else {
        if(queue_front<stack_top){
            queue_front++;
        }
    }
    return;
}

long queue_front_val()
{
    long val;
    if(queue_front<stack_top){
        queue_front++;
        val=stack[queue_front];
        queue_front--;
        
    }
    return val;

}
