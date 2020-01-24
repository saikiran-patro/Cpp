#include<iostream>
#include<stdio.h>
using namespace std;
class A
{
	public:
		float P=1000.00;
	void option()
	{
		cout<<"\t\t\twelcome to STATE BANK OF INDIA\t\t\n";
		cout<<"\t\t------------------------------------------------\n";
		cout<<"\t\t\t\t1.withdraw\n";
		cout<<"\t\t\t\t2.deposit\n";
		cout<<"\t\t\t\t3.balance\n";
		cout<<"\t\t------------------------------------------------\n";
		cout<<"your balance is"<<P;
		
	}
};
class B:public A
{
	public:
	float a,total,b;
	void withdraw()
	{
		cout<<"\nenter amount to be withdrawn:";
		cin>>a;
		total=P-a;
		cout<<"\nyour balance is:"<<total;
		try
		{
			if(total==0)
			{
				throw total;
				cout<<"after throw";
			}
		}
			
		catch (float total)
		{
			cout<<"\nbalance nill";
		}
	}
	void deposit()
	{
		cout<<"\namount to be deposited:";
			cin>>b;
			total=total+b;
			cout<<"total is:"<<total;
		}
		void balance(int total)
		{
			cout<<total;
			}
			friend void balance(B obj1);
};
void balance(B obj1)
{
	cout<<obj1.total;
}
int main()
{
	int choice,total,s;
	A obj;
	B obj1;
	obj.option();
	w:
	cout<<"\nenter ur choice:";
	cin>>choice;
		switch(choice)
		{
			case 1:cout<<"\nselected withdraw:";
			
			obj1.withdraw();
			//break;
			goto w;
			case 2:cout<<"\nselected deposit:";
			obj1.deposit();
			//break;
			goto w;
			case 3:cout<<"\nyour balance";
			balance(obj1);
			break;
			default:cout<<"invalid option";
		}
		
	
	
}


