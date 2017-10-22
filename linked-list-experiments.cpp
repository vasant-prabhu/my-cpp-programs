//Create  a node . Add node , delete node ,reverse a node

#include<iostream>
#include<conio.h>
#include<malloc.h>


typedef struct node
{
int data;
struct node* next;
}Node;

void addNode(Node**,int);
void printNodes(Node*);
void deleteNode(Node**,int val);
void reverse_node_iterative(Node**);
void reverse_node_recursive(Node**);

int main()
{ 
   using namespace std;
   Node *q = NULL;
   addNode(&q,7);
   addNode(&q,14);
   addNode(&q,21);
   addNode(&q,28);
   printNodes(q);
   std::cout<<"delete a node"<<endl;
   deleteNode(&q,21);
   printNodes(q);
   std::cout<<"now,reverse the linked list "<<endl;
   reverse_node_iterative(&q);
   printNodes(q);
   std::cout<<"now,again reverse the linked list "<<endl;
   reverse_node_recursive(&q);
   getch();
   return 0;
}

void addNode(Node **q,int val)
{
   if (*q == NULL)
   {
      Node *temp = *q;
      temp = (Node *)malloc(sizeof(Node));
       temp->data = val;
       temp->next = NULL;
       *q=temp;
   } 
   else
   {
      Node *temp = *q; 
      while(temp->next!=NULL)
      {
         temp = temp->next;
      }
      //Now you are pointing to the last node
      //And here is where you add the new node
      Node *r = (Node *)malloc(sizeof(Node));
      r->next = NULL;
      r->data = val;
      temp->next = r;
   }
}

void printNodes(Node *q)
{
   Node *temp = q; 
   while (temp!=NULL)
   {
      std::cout<<temp->data<<std::endl;
      temp = temp->next;
   }
}
      
void deleteNode(Node** q,int val)
{
   Node *temp = *q;
   Node *prev =NULL;
   
   //its the first node
   if(temp->data == val)
   {
      temp=temp->next;
      free(*q);
      *q=temp;
   }
   else
   {
      while (temp != NULL)
      {
         //intermediate node 
         if (temp->data == val)
         {
         //you are at the node you want to delete
         prev->next = temp->next;
         delete(temp); 
         break;  
         }
         prev = temp;
         temp=temp->next;
      }
   }
}
   
void reverse_node_iterative(Node **head)
{
   Node *prev=NULL;
   Node *next=NULL;
   Node *current= *head;
   
   while(current!=NULL)
   {
      next = current->next;
      current->next=prev;
      prev=current;
      current = next;
   }
   *head=prev; 
}

void reverse_node_recursive(Node **head)
{
   Node *prev=NULL;
   Node *temp=*head;
   if (temp == NULL)
   {
   *head = temp;
   return;
   }   
   reverse_node_recursive(&(temp->next));
   temp->next->next=temp;
   


}
   
   
   
   
   
   
   
   

