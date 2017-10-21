// to print first 50 prime nos
#include<iostream>
#include<conio.h>

int main()
{
   int i,j;
   
   using namespace std;
   for (i=3;i<50;i++)
   {
      for (j=2;j<i;j++)
      {        
         if (i%j==0)
         {
           break;
         }
      }
      if (i==j)
      {
         printf("%d  ",i);
      }
   }
   getch();
   return 0;
}


