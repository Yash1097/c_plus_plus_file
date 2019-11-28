#include<iostream>
using namespace std;
class Resource
{
	static bool state;
	public:
	static void set(bool r)
	{
		state = r;
	}
	static bool get()
	{
		return state;
	}
	void allocate()
	{
		if(get() == false)
		{
			set(true);
			cout<<"Resource allocated"<<endl;
		}
		else
			cout<<"Resource cant be allocated\n";
	}
	void deallocate()
	{
		if(get() == true)
		{
			set(false);
			cout<<"Resource Deallocted"<<endl;
		}
		else
			cout<<"Resource is already free\n";
	}
};
bool Resource::state;
int main()
{
	Resource r1,r2;
	r1.allocate();
	r2.allocate();
	r1.deallocate();
	r2.allocate();
	r1.deallocate();
	r2.deallocate();
}
