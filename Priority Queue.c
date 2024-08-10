#include <stdio.h>
#include <stdlib.h>
#define MAX 10
void create_queue();
void insert_element(int);
void dequeue();
void check_priority(int);
void display();
int pqueue[MAX];
int front, rear;
void main()
{
int n, choice;
printf("\nEnter 1 to insert element by priority ");
printf("\nEnter 2 to delete element by priority ");
printf("\nEnter 3 to display priority queue ");
printf("\nEnter 4 to exit");
create_queue();
while (1)
{
printf("\nEnter your choice : ");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("\nEnter element to insert : ");
scanf("%d",&n);
insert_element(n);
break;
case 2:
//printf("\nEnter element to delete : ");
//scanf("%d",&n);
dequeue();
break;
case 3:
display();
break;
case 4:
exit(0);

default:
printf("\n Please enter valid choice");
}
}
}
void create_queue()
{
front = rear = -1;
}
void insert_element(int data)
{
if (rear >= MAX - 1)
{
printf("\nQUEUE OVERFLOW");
return;
}
if ((front == -1) && (rear == -1))
{
front++;
rear++;
pqueue[rear] = data;
return;
}
else
check_priority(data);
rear++;
}
void check_priority(int data)
{
int i,j;
for (i = 0; i <= rear; i++)
{
if (data >= pqueue[i])
{
for (j = rear + 1; j > i; j--)
{
pqueue[j] = pqueue[j - 1];
}
pqueue[i] = data;
return;
}
}
pqueue[i] = data;
}

void dequeue()
{
if(front==-1&&rear==-1)
{
printf("Queue Underflow");
}
else if(front==rear)
{
front=rear=-1;
printf("Dequeued element is:",pqueue[i]);
}
else
{
front++;
}
}

void display()
{
int i;
if ((front == -1) && (rear == -1))
{
printf("\nEmpty Queue ");
return;
}
else
{
for(i=front;i<rear+1;i++)
printf(" %d ", pqueue[i]);
}
}