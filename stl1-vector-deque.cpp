#include<iostream>
#include<conio.h>
#include<vector>
#include<deque>
#include<algorithm>
int main()
{
   using namespace std;
   std::vector<int>vec;
   vec.push_back(5);
   vec.push_back(45);
   vec.push_back(24);
   vec.push_back(16);
   vec.push_back(95);
   cout<<"preeti - "<<vec[3]<<endl;
   vector<int>::const_iterator it = vec.begin();
   while(it !=vec.end())
   {
      std:cout<<*it<<endl;
      it++;
   }
   
   cout <<"writing program for deque"<<endl;
   std::deque<int> deq;
   deq.push_back(15);
   deq.push_back(20);
   deq.push_back(25);
   deq.push_back(30);
   deq.push_back(35);
   deq.push_front(98);
   deq.push_front(63);
   deq.push_front(45);
   deque<int>::const_iterator iter = deq.begin();
   while(iter!=deq.end())
   {
      cout<<*iter++<<endl;
   }   
   cout<<"Now sort the deque"<<endl;
   iter = deq.begin();
   sort(deq.begin(),deq.end());
   cout<< " Sorted deque is "<<endl;
      while(iter!=deq.end())
   {
      cout<<*iter++<<endl;
   }   
   
   
   
getch();
return 0;
}

