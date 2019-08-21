/*
problem description:
https://www.hackerrank.com/challenges/balanced-brackets/problem
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

int stack_top=-1;
int stack[10000];
int stack_empty()
{
    if(stack_top==-1)
        return 1;
    else 
        return 0;
}
int push(int val){
    if(stack_top==10000)
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
char* isBalanced(char* s) {
    int len=strlen(s),i=0;
    unsigned char c;
    stack_top=-1;
    
    for(i=0;i<len;i++){
        c=s[i];
    
            switch (c) {
            case '{':
            case '(':
            case '[':
                push(c);
                
                break;
            case '}':
                if (stack_empty()){
                    return "NO";
                } else if(pop() != '{') {
                    return "NO";
                } else {

                }
                break;
            case ')':
                if (stack_empty()){
                    return "NO";
                } else if(pop() != '(') {
                    return "NO";
                } else {

                }
                break;
            case ']':
                if (stack_empty()){
                    return "NO";
                } else if(pop() != '[') {
                    return "NO";
                } else {

                }
                break;
            //default:
               // return "NO";
        }
    }
    //printf("stack top=%d\n",stack_top);
    if(stack_empty()!=1)
        return "NO";
    
    return "YES";
}
