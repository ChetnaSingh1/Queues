#include<stdio.h>

#define max 10


int rear,front;
int queue[10];
rear=-1;
front=-1;
int enqueue()			//function to insert element in queue
{
	int x;
	if(rear==max-1)			//Condition to check whether queue is full 
		printf("Queue is full ");
	else
		if(front==-1)		//if queue is empty	
			front=0;		//send pointer to 0th position 
		printf("Enter element ");
			scanf("%d",&x);
		rear=rear+1;		//insertion happens from rear side 
		queue[rear]=x; 
}

int dequeue()
{
	if((front==-1)||(front>rear)) 		//consition to check if queue is empty
		printf("Queue is empty ");
	else
		queue[front]=0;			//deleting the element 
		if(front!=rear)			//more elements are present in the queue
			front=front+1;
		else 					//queue is empty
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
	printf(" %d ",queue[i]);
}

int main()
{
	int ch;
	while(1)
	{
		printf("Enter choice : \n1. Add element 2. Delete element ");
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
