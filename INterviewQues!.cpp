#include<iostream>
using namespace std;
class Base{
	public:
	virtual void Display(){
		cout<<"Base";
	}
};
class Derived:public Base{

	public:
	void Display(){
		cout<<"Derived";
	}
};
int main(){
	Base *b=new Base();
	Derived *d=new Derived();
	Base *b1=new Derived();
	//Derived *d1=new Base();
	b->Display();
	d->Display();
	b1->Display();
	//d1.Display();
}
