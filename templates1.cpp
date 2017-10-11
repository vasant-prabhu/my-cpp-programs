#include<iostream>
#include<conio.h>
using namespace std;
template <typename T>
T add(T x,T y)
{
  return x+y;
}

int main()
{
int a=20;
int b =30;
float y=34.34;
float z = 23.98;
cout<<"Add 2 numbers"<<endl;

cout<<"result is "<<add<float>(y,z)<<endl;
return 0;
}


