#include<stdio.h>
int main()
{
int arr[5]={45,12,67,23,78};
int i,j;
int container;   
   for (i=0;i<4;i++)
   {
      for (j=0;j<4;j++)
      {
         if (arr[j]>arr[j+1])
         {
         //swap the 2 numbers
         container = arr[j];
         arr[j]=arr[j+1];
         arr[j+1]=container;
         }
      }
   }
   for(int k=0;k<5;k++)
   printf("%d  ",arr[k]);
return 0;
}   

