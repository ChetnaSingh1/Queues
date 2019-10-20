#include<stdio.h>

#define max 15


int rear,front;
int Cqueue[15];
rear=-1;
front=-1;
int enqueue()			//function to insert element in queue
{
	int x;
	if(((front==0)&&(rear==max-1))||(front==rear+1))			//Condition to check whether queue is full 
		printf("Queue is full ");
	else
		if((rear==max-1)&&(front!=0))		//if queue has few elements
			rear=-1;		
		printf("Enter element ");
			scanf("%d",&x);
		Cqueue[++rear]=x; 				
		if(front==-1)
			front=0;;		//	
}

int dequeue()
{
	if((front==-1)&&(rear==-1)) 		//consition to check if queue is empty
		printf("Queue is empty ");
	else
		Cqueue[front++]=0;			//deleting the element 
		if(front==max)			
			front=0;
		if(front-1==rear)					//queue is empty
			{
				front=-1;
				rear=-1;
			}
}

int display()
{
	int i;
	printf("Queue : ");
	for(i=0;i<=rear;i++)
	printf(" %d ",Cqueue[i]);
}

int main()
{
	int ch;
	while(1)
	{
		printf("\nEnter choice : \n1. Add element 2. Delete element ");
			scanf("%d",&ch);
		switch(ch)
		{
			case 1: enqueue();
					display();
				break;
			case 2: dequeue();
					display();
				break;
		}
	}
}
