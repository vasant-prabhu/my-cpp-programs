// Program on smart pointers
//Smart because it manages its own deallocation.
//That is, if you write a class where the memory allocation takes place in the 
//constructor, and deallocation happens in destructor , whenever an object of that class 
//goes out of scope , its memory is freed.
//As it has local scope , we called it autoptr class

#include<iostream>
#include<conio.h>

template <class T>
class autoPtr
{
private:
T *m_ptr;
public:
autoPtr(T *ptr):m_ptr(ptr)
{
std::cout<<"In the constructor"<<std::endl;
}
~autoPtr()
{
std::cout<<"In the destructor"<<std::endl;
delete m_ptr;
}

//overload the ->operator

T* operator->(){return m_ptr;}


//overload the assignment operator
autoPtr& operator=(autoPtr& ptr)
{
if (this == &ptr)
return *this;
delete m_ptr;
m_ptr = ptr.m_ptr;
ptr.m_ptr=0;
return *this;
}

};





class resource
{
public:
resource()
{
std::cout<<"resource allocated"<<std::endl;
}
~resource()
{
std::cout<<"resource deallocated"<<std::endl;
}
void sayhi()
{
std::cout<<"hi"<<std::endl;
}
};


int main()
{
   using namespace std;
   autoPtr<resource> myptr (new resource);
   myptr->sayhi();
   
   autoPtr <resource> helloptr=0;
   helloptr = myptr;
   helloptr->sayhi();
   
   getch();
   return 0;
}


