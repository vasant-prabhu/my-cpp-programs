//deep copy and assignment operator code

#include<iostream>
#include<conio.h>
#include<assert.h>

class IntArray
{
   private:
   int arrLen;
   int *ptr;
   public:
   
   IntArray(){}
   
   IntArray(int length):arrLen(length),ptr(0)
   {
      ptr = new int[arrLen]; 
   }

   ~IntArray()
   {
      delete[] ptr; 
   }

   friend std::ostream& operator<<(std::ostream &out,IntArray &arr)
   {
      for (int i=0;i<5;i++)
      out<<arr.ptr[i]<<std::endl; 
      return out;
   }
   
   // deep copy in assignment operator overloading
   IntArray& operator=(IntArray& arr)
   {
      if (this == &arr)
      return *this;
      
      delete[] ptr;
      
      arrLen = arr.arrLen;
      ptr = new int[arrLen];
          
      for (int i=0;i<arrLen;i++)
      {
         ptr[i] = arr.ptr[i];
      }
      return *this;
   }
   
   // deep copy in a copy constructor
   
   IntArray(IntArray &arr)
   {
      assert(arr.arrLen>0);
      arrLen = arr.arrLen;
      ptr = new int [arrLen];
      
      for (int i=0;i<arrLen;i++)
      {
         ptr[i]=arr.ptr[i];
      }
   }
   
   int& operator[](int index)
   {
      return ptr[index]; 
   }
   
   
};


IntArray fillArray()
{
	IntArray a(5);
	a[0] = 5;
	a[1] = 8;
	a[2] = 2;
	a[3] = 3;
	a[4] = 6;
 
	return a;
}

int main()
{
   using namespace std;
	IntArray a = fillArray();
	std::cout << a << '\n';
 /*
	IntArray b(1);
	a = a;
	b = a;
 
	std::cout << b << '\n';
 */
	
   getch();
   return 0;
}


