/*
problem: coredump analysis
*/

#include<stdio.h>
#include<stdlib.h>
typedef struct container{
	int v;
	struct container *p;
}b;

int main()
{
	int i;
	b *head,*temp,*temp1;
  
	scanf("%d",&i);
	head=(b *)malloc(sizeof(b));
  	int j;
  	
	temp=head;
  	for(j=0;j<i;j++)
  	{
     		temp->p=(b *)malloc(sizeof(b));
     		scanf("%d", &temp->v);
     		temp=temp->p;
  	}
  	temp1=head;
  	for(j=0;j<i;j++)
  	{
     		printf("%d ",temp1->v);
     		temp1=temp1->p;
  	}
	return 0;
}
