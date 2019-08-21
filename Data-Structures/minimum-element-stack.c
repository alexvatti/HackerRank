/*
problem description:
https://leetcode.com/problems/min-stack/
https://www.geeksforgeeks.org/design-and-implement-special-stack-data-structure/

Question: Design a Data Structure SpecialStack that supports all the stack operations like 
push(), pop(), isEmpty(), isFull() and an additional operation 
getMin() which should return minimum element from the SpecialStack. 
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
int min=3000;
int stack[STACK_MAX];

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

int push(int val){
    if(stack_top==STACK_MAX)
        return 0;
    else {
	if(val<= min) {
		//printf("true\n");
        	stack_top++;
        	stack[stack_top]=min;
		min=val;
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
        if(val==min){
		min=stack[stack_top];
        	stack_top--;
                
	}
        return val;
    }
}
int stack_min()
{
	return min;

}

void print_menu()
{
	printf("1. push to stack...\n");
	printf("2. pop from the stack....\n");
	printf("3. top of the stack......\n");
	printf("4. display the stack.....\n");
	printf("5. min of the stack......\n");
	printf("6. delete the stack.......\n");
	printf("7. to quit/exit the app....\n");
}
int main()
{
	int ch,val,i;
	stack_top=-1;
	min=3000;
	while(1) {
		print_menu();
		scanf("%d",&ch);
		if(ch==7) break;
		switch(ch)
		{
			case 1: 
				printf("enter the value to push\n");
				scanf("%d",&val);
				push(val);
				break;
			case 2:
				if(stack_empty()==1)
					printf("stack is empty\n");
				else
					printf("pop val=%d\n",pop());
				break;
			case 3:
				if(stack_empty()==1)
					printf("stack is empty\n");
				else
					printf("top val=%d\n",top());
				break;
			case 4:
				printf("stack values..\n");
				i=stack_top;
				while(i!=-1){
					printf("val=%d\n",stack[i]);
					i--;
				}
				break;
			case 5:
				printf("stack min value..\n");
				if(stack_empty()!=1){
					printf("min val=%d\n",stack_min());
				}
				break;
			case 6:
				stack_top=-1;
		}
       }
return 0;
}
	
