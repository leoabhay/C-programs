#include<iostream.h>
#include<conio.h>
using namespace std;
class tollbooth{
	int car,amount;
	public:
		tollbooth(){
			car=0;
			amount=0;
		}
		
		void payingcar(){
			car++;
			amount=amount + 5;
		}
		
		void nopaycar(){
			car++;
		}
		
		void display()
		{
			cout<<"No. of cars:"<<car<<endl;
			cout<<"Total amount:Rs"<<amount<<endl;
		}
};
	int main(void){
		tollbooth T;
		while(1)
		{
			cout<<"\n...!!**Menu**!!...\n 1.Paying car \n 2.Not paying car \n 3.Display information \n 4.Exit"<<endl;
			int c;
			cin>>c;
			switch(c)
			{
				case1:
					t.payingcar();
					break;
				case2:
					T.nopaycar();
					break;
				case3:
					T.display();
					break;
				case4:
					exit(0);
				default:
					cout<<"Please enter only between 1-4!!"<<endl;
			}
		}
	}

