#include<iostream>
#include<cstring>
using namespace std;
class Bank
{
	string cname;
	int ano;
	char type;
	float abal;
	public:
	Bank()
	{
		cname = " ";
		ano = 0;
		type = 's';
		abal = 0.0f;
	}
	void createacc(string nm, int an,char t,float bal)
	{
		cname = nm;
		ano = an;
		type = t;
		abal = bal;
	}
	void deposit(float bal)
	{
		abal+= bal;
	}
	void withdraw(float bal)
	{
		if((abal-bal)>0)
			abal-=bal;
		else
			cout<<"Not enough balance";
	}
	void dispaly()
	{
		cout<<"Customer Name: "<<cname<<endl;
		cout<<"Account Number: "<<ano<<endl;
		cout<<"Type of Account: "<<type<<endl;
		cout<<"Balance: "<<abal<<endl;
	}
};
int main()
{
	Bank b1;
	string name = "yash";
	b1.createacc(name,2343,'s',5000);
	b1.dispaly();
	b1.deposit(3000);
	b1.dispaly();
	b1.withdraw(2000);
	b1.dispaly();
	return 0;
}
