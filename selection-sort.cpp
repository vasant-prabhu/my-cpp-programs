//selection sort algorithm

#include<iostream>
#include<conio.h>
void select_sort(int [],int);
int main()
{
   using namespace std;
   int arr[10]={23,12,87,45,64,123};
   select_sort(arr,6);
   printf("printed select-sorted array..\n");
   for (int k=0;k<6;k++)
   {
   printf("%d ",arr[k]);
   }
   getch();
   return 0;
}
void select_sort(int *arrptr,int size)
{
   int min_index=0;
   int temp;
   for (int i=0;i<size-1;i++)
   {
      min_index=i;
      for (int j=i+1;j<size;j++)
      {
         if (arrptr[j]<arrptr[min_index])
         {
            min_index = j;
         } 
      }
   
      temp=arrptr[i];
      arrptr[i]=arrptr[min_index];
      arrptr[min_index]=temp;   
   }
}



