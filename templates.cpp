// Templates Basic program
#include <iostream>
//using namespace std;
template <typename T>
const T& max(const T& num1,const T& num2)
{
   return (num1>num2)?num1:num2;
}

class CCents
{
public:
   CCents(int cents){m_cents = cents;}
   friend bool operator>(const CCents& num1,const CCents& num2)
   {
      return (num1.m_cents>num2.m_cents);
   }
   friend std::ostream& operator <<(std::ostream &out,const CCents &cents)
   {
   out<<cents.m_cents<<"  cents";
   return out;
   }

private:
   int m_cents;
   
};

int main()
{
   CCents c1(5),c2(4),c3(33);
   int z=max(5,6);
   //std::cout<< "z is "<<z;
   
   CCents abc = max(c1,c3);
   std::cout<<abc;
   
   return 0;   
}

