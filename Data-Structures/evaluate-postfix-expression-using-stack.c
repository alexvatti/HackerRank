/*
problem discription:
https://www.includehelp.com/c/evaluation-of-postfix-expressions-using-stack-with-c-program.aspx
http://btechsmartclass.com/data_structures/postfix-evaluation.html
https://www.geeksforgeeks.org/stack-set-4-evaluation-postfix-expression/
*/
#include<assert.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>
#include<stddef.h>
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

int main()
{
	int ch,val,i;
	int exp[]={2,1,'+',3,'*'};
	int sum=0;
	int op,op1,op2;

	stack_top=-1;
	
	for(i=0;i<=4;i++)
	{
		op=exp[i];
		if(op=='+' || op=='-' || op=='*' || op=='/'){
		op2=pop();
		op1=pop();
		ch=op;
		sum=0;
		switch(ch){
			case '+': sum=op1+op2; break;
			case '-': sum=op1-op2; break;
			case '*': sum=op1*op2; break;
			case '/': sum=op1/op2; break;
		}
		push(sum);
		}else {
			push(exp[i]);
		}
        } 
        printf("Post fix expression...\n");
     	for(i=0;i<5;i++){
		if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/')	
              		printf("\"%c\"," ,exp[i]);	
	  	else
	     		printf("\"%d\"," ,exp[i]);	
    	}

     	printf("\noutput=%d\n",sum);
	return 0;
}
