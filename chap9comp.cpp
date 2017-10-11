//Write a class named Average that will keep track of the average of all integers passed to it. 
//Use two members: The first one should be type int32_t, and used to keep track of the sum of all the numbers you’ve seen so far. 
//The second should be of type int8_t, and used to keep track of how many numbers you’ve seen so far.
// You can divide them to find your average.

#include<iostream>
#include<conio.h>
#include<stdint.h>

class cAverage
{
   private:
   int32_t m_sum;
   int8_t m_nos;
   public:
   cAverage():m_sum(0),m_nos(0){}
   int32_t getAverage(int32_t * arr,int8_t m_nos);
   
   //Now overload the + operator to accept
   //a) Object . Integer
   
    cAverage& operator+=(int32_t rand)
   {
      m_sum += rand;
      m_nos++;
      return (*this);
   }
      
   //overload the cout
   
   friend std::ostream& operator<<(std::ostream &out,cAverage& obj)
   {
   out<<"The average is "<<(static_cast<float>(obj.m_sum)/static_cast<float>(obj.m_nos))<<std::endl;
   return (out);
   }
   
   //Write a copy constructor for cAverage
   
   cAverage(const cAverage& myobj)
   {
      m_sum = myobj.m_sum;
      m_nos = myobj.m_nos;
   
   }
   
};

int main()
{
   using namespace std;
   //int32_t arr[5]={45,45,45,45,45};
   //cAverage obj;
   //int32_t res = obj.getAverage(arr,5);
   //cout<<"The average is  "<<res<<std::endl;
   
   cAverage avg;
  	avg += 4;
	std::cout << avg << '\n'; // 4 / 1 = 4
	
	avg += 8;
	std::cout << avg << '\n'; // (4 + 8) / 2 = 6

	avg += 24;
	std::cout << avg << '\n'; // (4 + 8 + 24) / 3 = 12

	avg += -10;
	std::cout << avg << '\n'; // (4 + 8 + 24 - 10) / 4 = 6.5

	(avg += 6) += 10; // 2 calls chained together
	std::cout << avg << '\n'; // (4 + 8 + 24 - 10 + 6 + 10) / 6 = 7

	cAverage copy = avg;
	std::cout <<"copy is "<< copy << '\n';
   
   getch();
   return 0;
}

int32_t cAverage::getAverage(int32_t *arr,int8_t m_nos)
{
   for (int i=0;i<m_nos;i++)
   {
      m_sum=arr[i]+m_sum;    
   }
   std::cout<<"The total is "<<m_sum<<"  "<<std::endl;
   return (m_sum/m_nos);
}

