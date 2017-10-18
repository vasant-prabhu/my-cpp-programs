#include<iostream>
#include<conio.h>
void func(int&);
int main()
{
   using namespace std;
   int x=45;
   
   func(x);
   //printf(" val is %d",x);
   
   const int &ref1 = x;
   printf("ref1 is %d\n\n",ref1);
   x = 2345;
   printf("2.ref1 is %d",ref1);

   getch();
   return 0;
}

void func( int &ref)
{
ref = 4446;
}
