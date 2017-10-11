#include<iostream>
#include<conio.h>
#include<pthread.h>
#define NUM_THREADS 5

void *doSomeWork(void * i)
{
int num = (int) i;
pthread_exit(num);
}

int main()
{
   using namespace std;
   int status;
   pthread_t t[5];
   pthread_attr_t attr;
   pthread_attr_init(&attr);
   for (int i=0;i<NUM_THREADS;i++)
   {
      pthread_create(&t[i],&attr,doSomeWork,i);
      printf("thread %d",t[i]);
   }
   for (int i=0;i<NUM_THREADS;i++)
   {
      pthread_join(&t[i],&status);
      printf("The status returned by thread %d is %d",t[i],status)
   }
   pthread_exit();
   pthread_attr_destroy(&attr);

   getch();
   return 0;
}


