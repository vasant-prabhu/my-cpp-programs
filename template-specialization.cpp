//template class specialization

#include<iostream>
#include<conio.h>

class Person
{
   private:
   int m_no;
   public:
   Person(int val):m_no(val){};
   int operator+(Person& someperson)
   {
   m_no+=someperson.m_no;
   return m_no;
   };
   int getvalue(){return m_no;}
};

template <class T>
class Accum
{
   private:
   T total;
   public:
   Accum(T count):total(count){};
   
   T operator+(T& someno)
   {
   total = total + someno;
   };
   T getvalue(){return total;};
};

template <>
class Accum<Person>
{
   private:
   int total;
   public:
   Accum(int count):total(count){};
   
   int operator+=(Person& someperson)
   {
   total=total+someperson.getvalue();
   };
   int getvalue(){return total;}
};


int main()
{
   using namespace std;
   Accum<Person>something(0);
   Person P1(5);
   Person P2(10);
   something+=P1;
   something+=P2;
   cout<<something.getvalue()<<endl;
   getch();
   return 0;
}



