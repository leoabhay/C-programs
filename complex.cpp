#include<iostream>
#include<conio.h>
using namespace std;
class rational
{
	int num,den;
	public:
		void getdata();
		void displaydata();
		void addrational(rational r1,rational r2);
	};
	
	void complex::getdata()
	{
		cout<<"Enter numerator and denominator:"<<endl;
		cin>>num>>den;
	}
	
	void complex::displaydata()
	{
		cout<<"rational number is:"<<num<<"/"<<den<<endl;
		
	}
	
	void complex::addrational(rational r1,rational r2)
	{
		
		num = r1.num*r2.den + r2.num*r1.den;
		den = r1.den * r2.den ;
	
	}
	
	int main(void)
	{
		rational r1,r2;
		r1.getdata();
		r2.getdata();
		r1.displaydata();
		r2.displaydata();
		c1.addrational(r1,r2);
		cout<<"After addition:"<<endl;
		r1.displaydata();
		getch();
	}

