#include<iostream>
using namespace std;
class Linklist
{
	public:
		class Node
		{
			int data;
			Node *next;
			public:
			void setdata(int i)
			{
				data = i;
			}
			void setnext(Node *np)
			{
				next = np;
			}
			int getdata()
			{
				return data;
			}
			Node* getnext()
			{
				return next;
			}
		};
		Node *head;
		Linklist()
		{
			head = NULL;
		}
		void add(int i)
		{
			Node *ptr = new Node();
			ptr->setdata(i);
			ptr->setnext(NULL);
			if(NULL == head)
			{
				head = ptr;
			}
			else
			{
				Node *qtr = head;
				while(NULL != qtr->getnext())
				{
					qtr = qtr->getnext();
				}
				qtr->setnext(ptr);
			}
		}
		void display()
		{
			Node *ptr = head;
			while(NULL != ptr)
			{
				cout<<ptr->getdata()<<" -> ";
				ptr = ptr->getnext();
			}
		}
};
int main()
{
	Linklist l;
	l.add(2);
	l.add(4);
	l.add(3);
	l.display();
	return 0;
}
