// program to create a linked list , maintain it

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct node
{
   int data;
   struct node *next;
}Node;

void addNode(Node **,int num);
void insertNode(Node **,int position);
int deleteNode(Node **,int val);
void printNodes(Node *);
void ascending(Node *);

int main()
{
 Node *q = NULL;
 //printf("address of q is %p",q);
 addNode(&q,7);
 addNode(&q,4);
 addNode(&q,23);
 addNode(&q,12);
 printNodes(q);
 deleteNode(&q,23);
 
 addNode(&q,45);
 addNode(&q,78);
 printNodes(q);
 
printf("\n Now lets arrange the items in ascending order");
 printf("End of Program");
 getch();
 return 0;
}

void addNode(Node **q,int num )
{
 Node *temp;
 //printf("\n2-address of q is %p",q);
 if (*q == NULL)
 {
 temp = (Node*)malloc(sizeof(Node));
 temp->data = num;
 temp->next = NULL;
 *q =temp;
 //printf("\n3-address of q is %p",q);
 }
 else
 {
   temp = *q;
   while (temp->next !=NULL)
   {
     temp = temp->next;
   }
   Node *r = (Node*)malloc(sizeof(Node));
   r->data = num;
   r->next = NULL;
   temp->next =r;
 }
}


void printNodes(Node *q)
{
  Node *temp = q;
  while(temp != NULL)
  {
    printf("%d  ",temp->data);
    temp = temp->next;
  }
  printf("\n\n");
}

int deleteNode(Node **q, int val)
{
Node *temp = *q;
Node * prev = NULL;

while (temp!=NULL)
{
 if (temp->data == val)
 {
   //this is the node to delete
   // there are 2 cases to handle here , one is to delete the 1st node ,second is to delete any intermediate node 
   if (temp == *q)
   {
    //first make q point to the next node and then only delete the first node
    *q = temp->next;
    free(temp);
    return 0;
   }
   else
   {
    //connect the previous node to the next node , and then delete the node in question
    prev->next = temp->next;
    free(temp);
    return 0;
   }
 }

prev = temp;
temp = temp->next;
}

void ascending(Node *q)
{
   int i=0,j=0,container=0;
   Node *temp =q;
   
   for (i=0;i<4;i++)
   {
      for (j=0;j<4;j++)
      {
         if (arra[j]>arr[j+1])
         {
         //swap the 2 numbers
         container = arr[j];
         arr[j]=arr[j+1];
         arr[j+1]=container;
         }
      }
   }
      
      
      }
   
   
   
   
   while(temp!=NULL)
   {
    
   }


}





}




