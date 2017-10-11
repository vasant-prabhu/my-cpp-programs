#include<iostream>
#include<conio.h>
#include<list>
#include<algorithm>
int main()
{
   using namespace std;
   std::list<int> li;
   li.push_back(34);
   li.push_back(23);
   li.push_back(65);
   li.push_back(94);
   list<int>::iterator it;
   it = find(li.begin(),li.end(),65);
   li.insert(it,987);
   it = li.begin();
   while(it !=li.end())
   {
   cout<<*it++<<endl;   
   }
   
   
   
   getch();
   return 0;
}


