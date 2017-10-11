//function pointers

#include <iostream>
#include <conio.h>
int addnos(int,int);
using namespace std;
int main()
{
	int (*cmp)(int,int)=addnos;
	int res = cmp(5,6);
	cout<<"res is "<<res<<endl;
	
	
	return 0;
}
int addnos(int x,int y)
{
	int res;
	res = x+y;
	return res;	
}
