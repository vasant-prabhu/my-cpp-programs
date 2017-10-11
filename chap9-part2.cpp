//Write your own integer array class named IntArray from scratch (do not use std::array or std::vector). 
//Users should pass in the size of the array when it is created, and the array should be dynamically allocated.
// Use assert statements to guard against bad data. 
//Create any constructors or overloaded operators needed to make the following program operate correctly:

#include<iostream>
#include<conio.h>
class cIntArray
{
private:
int m_size;
int* m_data;

public:
cIntArray(int size):m_size(size),m_data(0){
m_data = new int[m_size]{0};

}

friend std::ostream& operator<<(std::ostream& out,const cIntArray& myobj)
{
for (int i=0;i<myobj.m_size;i++)
out<<myobj.m_data[i]<<std::endl;
return out;
}

//overload the assignment operator
cIntArray& operator=(const cIntArray& obj)
{
std::cout<<"1 size is "<<obj.m_size<<std::endl;
   if(this == &obj)
   {
      return *this;
   }
   if (m_data)
   delete[] m_data;
   
   m_size = obj.m_size;
   
   std::cout<<"size is "<<obj.m_size<<std::endl;
   
   m_data = new int[m_size];
   for (int i=0;i<obj.m_size;i++)
   {
      m_data[i] = obj.m_data[i];
   } 
   return *this;
   
   
}

	~cIntArray()
	{
	std::cout<<"Destructor called"<<std::endl;
		delete[] m_data;
	}


//overload the [] operator

int& operator[](const int index)
{
   
   return m_data[index];
} 
  
};

cIntArray fillArray(int size)
{
cIntArray a(size);
std::cout<<size;
for (int i=0;i<size;i++)
{
a[i]=(i+1)*2;
}

return a;
}

int main()
{
using namespace std;
cout<<"Please enter size of array"<<std::endl;
int size;
cin>>size;
cIntArray a = fillArray(size);
std::cout<<"hello cpp"<<std::endl;
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
