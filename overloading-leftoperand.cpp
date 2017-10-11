#include <iostream>
using namespace std;

class Cents
{
	private:
		int m_cents;
		
	public:
		Cents(int myval=0){
			m_cents = myval;
		}
		
		Cents (const Cents& c1)
		{
			cout<<"Copy constructor called"<<endl;
		}
		int getCents()const{return m_cents;}
		Cents operator+=(int value);
};

Cents Cents::operator+=(int value)
{
	return Cents(m_cents+value);	
}
int main()
{
	Cents c1(5);
	c1+=7;
	cout << "result is"<<c1.getCents(); 
	Cents c2(c1);
	return 0;
}
