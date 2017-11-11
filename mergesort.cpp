// Trying out merge sort program

#include<iostream>
#include<conio.h>
void mergeSort(int *arr,int l,int r);
void merge(int *targetarr,int,int,int);
int main()
{
   using namespace std;
   int arr[8]={34,23,67,22,79,11,12,98};
   mergeSort(arr,0,7);
   printf("Sorted array -ascending -is \n");
   int l;
   for (l=0;l<7 ;l++)
   {
      printf("%d  ",arr[l]);
   }
   getch();
   return 0;
}
void mergeSort(int *targetarr,int l,int r)
{
   if(l<r)  //0<7
   {
      int m=(l+r)/2;  //   m=7/2=3
      //sort left array
      mergeSort(targetarr,l,m);
      //sort right array
      mergeSort(targetarr,m+1,r);
      //merge both together
      merge(targetarr,l,m,r);
   }
}
void merge(int *targetarr,int l,int m,int r)
{ 
   int i=0;
   int j=0;
   int k=0;
   int nL=m-l+1;
   int nR=r-m;
   
   //create 2 temp arrays and copy 
   int temparrleft[nL];
   int temparrRight[nR];
   
   /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < nL; i++)
        temparrleft[i] = targetarr[l + i];
    for (j = 0; j < nR; j++)
        temparrRight[j] = targetarr[m + 1+ j];
   i=0;
   j=0;
   k=l;

   while ((i<nL) && (j<nR))
   {
      if (temparrleft[i]<=temparrRight[j])
      {
          targetarr[k]=temparrleft[i];
          i++;k++;           
      }
      else
      {
          targetarr[k]=temparrRight[j];
          j++;k++;           
      }
   }
      //Now either of the arrays might have exhausted
      //lets write loops to copy the rest of the elements
      
      while(i<nL)
      {
         targetarr[k]=temparrleft[i];
         k++;i++;
      }
      while(j<nR)
      {
         targetarr[k]=temparrRight[j];
         k++;j++;
      }
}
