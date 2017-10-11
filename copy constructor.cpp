#include<iostream>
using namespace std;

class CTripopt
{
	public:
	int getnum(){return num;}
	void setnum(int x){num=x;}
	CTripopt();
	~CTripopt(){};
	CTripopt(CTripopt&);
	
	private:
	int num;
	friend bool operator==(CTripopt& c1,CTripopt& c2)
	{
   return (c1.num == c2.num);
   }
	
};
CTripopt::CTripopt()
{
num=34;
}
CTripopt::CTripopt(CTripopt &obj)
{
cout<<"Copy constructor called";
num = obj.num;

}

int main()
{
 CTripopt c1;
 CTripopt c2=c1;
 cout<<"Gundu maani is "<<c2.getnum();
 try
 {
  if (c2==c1)
  throw "same hai dono";
 }
catch(const char *text)
{
 cout<<"kya baat hai"<<endl;
}
return 0;	
	
}
