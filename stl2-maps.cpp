#include<iostream>
#include<conio.h>
#include<map>
#include<string>
int main()
{
   using namespace std;
   std::map<int,string>mymap;
   mymap.insert(make_pair(7,"preeti"));
   mymap.insert(make_pair(32,"vasu"));
   mymap.insert(make_pair(23,"gundi maani"));
   map<int,string>::const_iterator it;
   for (it=mymap.begin();it!=mymap.end();it++)
   {
   cout<<"  first element is "<<it->first<<"  second element is  "<<it->second<<endl;
   }
   getch();
   return 0;
}


