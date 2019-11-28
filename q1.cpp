#include<iostream>

using namespace std;

class publication{
	char title[20];
	float price;
	public:
	void getdata(){
		cout<< "Ente the title and the price for the books";
		cin>>title>>price;
	}
	void putdata(){
		cout<<"TITLE: "<<title<<endl<<"PRICE: "<<price<<endl;
	}
};
class books:public publication{
	int pagecount;
	public:
	void getdata(){
		publication :: getdata();
		cout<<"ENete the page count of the book ";
		cin>>pagecount;
	}
	void putdata(){
		publication :: putdata();
		cout<<"PAGE COUNT: "<<pagecount<<endl;
	}
};
class tape:public publication{
	float time;
	public:
	void getdata(){
		cout<<"Enter the time for thr book to read ";
		cin>>time;
	}
	void putdata(){
		cout<<"TIME TO READ: "<<time;
	}
};
int main()
{
	books b;
	tape t;
	b.getdata();
	t.getdata();
	b.putdata();
	t.putdata();
	return 0;
}
