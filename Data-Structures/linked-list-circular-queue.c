#include<assert.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>
#include<stddef.h>
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
    int val;
    struct node *link;
};

struct node *front=NULL,*rear=NULL;	

int queue_empty()
{
    if(front==NULL)
        return 1;
    else 
        return 0;
}


int enqueue(int val){

    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
        return 0;
    else {
        temp->val=val;
        temp->link==NULL;
	if(front==NULL){
		front=temp;
		rear=temp;
		rear->link=front;
	}else{
		rear->link=temp;
		rear=temp;
		rear->link=front;
	}
    }
    return 1;
}

int dequeue()
{
    int val;
    struct node *temp=front,*prev=NULL;
    if(front==NULL)
        return 1;
    else {
	 if(front==rear){
	     val=front->val;
	     temp=front;
	     front=rear=NULL;
	     free(temp);		
	 }else {
		 temp=front;
		 val=temp->val;
		 front=temp->link;
		 rear->link=front;	
		 free(temp);
        }
        return val;
    } 
}
int top()
{
    int val=-1;
    if(front!=NULL)
    	val=front->val;	
    return val;
    
}


int delete_queue()
{
    struct node *temp=front,*end=NULL,*temp2;
    int val;

    if(temp==NULL)
        return 1;
    else {
	while(temp!=end){
	temp2=temp;
	temp=temp->link;
	free(temp2);
        end=front;
        }
    }
    front=NULL;
    rear=NULL;
    return 0;
}

int display_queue()
{
    struct node *temp=front,*end=NULL;
    int val;

    if(temp==NULL)
        return 1;
    else {
	while(temp!=end){
	printf("value=%d\n",temp->val);
	temp=temp->link;
	end=front;
        }
    }
    return 0;	
}

void print_menu()
{
	printf("1.  circular queuue:enqueue to rear...\n");
	printf("2.  circular queuue:dequeue from the front....\n");
	printf("3.  circular queuue:front of the queue......\n");
	printf("4.  circular queuue:display the queue.....\n");
	printf("5.  circular queuue:delete the queue.......\n");
	printf("6. to quit/exit the app....\n");
}
int main()
{
	int ch,val;

	while(1) {
		print_menu();
		scanf("%d",&ch);
		if(ch==6) break;
		switch(ch)
		{
			case 1: 
				printf("enter the value to enqueue\n");
				scanf("%d",&val);
				enqueue(val);
				break;
			case 2:
				if(queue_empty()==1)
					printf("queue is empty\n");
				else
					printf("queue val=%d\n",dequeue());
				break;
			case 3:
				if(queue_empty()==1)
					printf("queue is empty\n");
				else
					printf("front val=%d\n",top());
				break;
			case 4:
				printf("queue values..\n");
				display_queue();
				break;
			case 5:
				delete_queue();
				break;
		}
       }
return 0;
}
