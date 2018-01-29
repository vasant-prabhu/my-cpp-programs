#include<iostream>
#include<conio.h>
#define MAX_QUEUE 5

class circularQueue
{
private:
   int *arr;
   int front,rear;
public:
   circularQueue()
   {
      front=rear=-1;
      arr=new int(MAX_QUEUE);
   }
   ~circularQueue()
   {}
   void add(int num);
   void delete();
};

void circularQueue::add(int num)
{
   //check for buffer overflow

   if ( ((front==0)&&(rear==MAX_QUEUE-1)) ||(rear==front-1))
   {
      cout<<"Queue is full"<<endl;
      return;   
   }
   if (front == -1)
   {
   front=rear=0;
   } 
   
   //add at the rear
   if (rear==MAX_QUEUE-1)
   {
      rear=0;
   }
   else
   {
   rear=rear+1;          
   }   
   arr[rear]=num;
}

void circularQueue::del(int num)
{
//check for underflow
if (front == rear)
{
front =rear=-1; //queue is empty
}

if (front == MAX_QUEUE-1)
{
front=0;
}
else
{
//delete from the front
front=front+1;
}


int main()
{
   using namespace std;
   circularQueue cq;
   cq.add(50);
   cq.add(20);
   cq.del();
   getch();
   return 0;
}


