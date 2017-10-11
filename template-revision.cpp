#include<iostream>

template <typename T>
T add(T x,T y)
{
return x+y;
}

int main()
{
using namespace std;
int a=20;
int b =30;
float y=34.34;
float z = 23.98;
cout << add<int>(a,b)<<endl;
cout << add<float>(y,z);
return 0;
}
