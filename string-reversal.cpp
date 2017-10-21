//string reversal
#include<iostream>
#include<conio.h>
#include<string.h>

int main()
{
   using namespace std;
   int i=0;
   char arr[7]="vasant";
   char rev[7];
   char *arrptr = arr;
   char *revptr = rev;
   
   //printf("%s\n",arrptr);
   while (*arrptr)
   {
   printf("%c\n",*arrptr);
   arrptr++;   
   i++;
   printf("%d\n",i);
   
   }
   
   while (i>0)
   {
   arrptr--;
   *revptr = *arrptr;
   
   printf("%c",*revptr);
   
   revptr++;i--;
   }
   
   printf("\n\nreversed string is %s",rev);
   
           
   getch();
   return 0;
}


