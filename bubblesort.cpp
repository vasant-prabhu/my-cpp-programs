// bubble sort algorithm

#include<iostream>
#include<conio.h>
int main()
{
   using namespace std;
   int arr[10]={23,12,87,45,64,123};
   
   for (int i=6;i>=0;i--)
   {
      for(int j=0;j<i;j++)
      {
         if(arr[j]>arr[j+1])
         {
         //swap(arr[i],arr[i+1]);
         int temp;
         temp=arr[j];
         arr[j]=arr[j+1];
         arr[j+1]=temp;
         }                
      }
   }
   
   for(int i=0;i<7;i++)
   printf("%d  ",arr[i]);  


   getch();
   return 0;
}


