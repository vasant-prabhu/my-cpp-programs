//playing with unique pointers

#include<iostream>
#include<conio.h>
#include<memory>
#include<cstring>

class A
{
public:
int m_num;
std::string m_mystring;

A(int num,std::string mystring):m_num(num),m_mystring(mystring)
{
}
};

auto makeA()->std::unique_ptr<A>
{
   return std::unique_ptr<A> {new A(45,"vasant")};
};

auto updateA(std::unique_ptr<A>temp_ptr)->std::unique_ptr<A>
{
temp_ptr->m_num = 12;
temp_ptr->m_mystring="preeti";
return temp_ptr;
}

int main()
{
   using namespace std;
   
   //create a unique pointer and make it point to an object of this class
   
   //auto ptr1=unique_ptr<A>(new A);
   
   auto ptr = makeA();
   if (ptr)
   {
   cout<<"ptr holds it !"<<endl;
   }
   auto ptr2=move(ptr);
   if (ptr)
   {
   cout<<"ptr holds it !"<<endl;
   }
   if (ptr2)
   {
   cout<<"ptr2 holds it !"<<endl;
   }
   
   ptr2=updateA(move(ptr2));
   
   cout<<ptr2->m_num<<"   "<<ptr2->m_mystring<<endl;
          
   getch();
   return 0;
}


