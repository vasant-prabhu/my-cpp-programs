#include<iostream>
using namespace std;

class Cents
{
	private:
		int m_cents;
	public:
		Cents(int Cents)
		{
			m_cents = Cents;
		}
		int getCents() const {return m_cents;}
		friend Cents operator+(const Cents &c1,const Cents &c2)
		{
			return (c1.m_cents+c2.m_cents);
		}
};

class Point
{
	private:
		double m_x;
		double m_y;
		double m_z;
	public:
		Point(double,double,double);
		friend ostream& operator<<(ostream& out,const Point &mypt) 
		{
			out<<"Point("<<mypt.m_x<<","<<mypt.m_y<<","<<mypt.m_z<<")";
			return out;
		}
};
Point::Point(double x,double y,double z):m_x(x),m_y(y),m_z(z)
{
	
}

int main()
{
Cents c1(15),c2(20);
Cents cSum = c1+c2;
cout <<"The answer is "<<cSum.getCents()<<endl;
Point objPoint(4.0,5.0,6.0);
cout << objPoint;
	
return 0;
}
