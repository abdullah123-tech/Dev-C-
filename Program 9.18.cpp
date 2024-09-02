#include<iostream>
using namespace std;
int g;
void fun();
int main()
{
	cout<<"Enter a number: ";
	cin>>g;
	cout<<"Value of g before function call: "<<g<<endl;
	fun();
	cout<<"Value of g after function call: "<<g<<endl;
	return 0;
}
void fun()
{
	g=g*2;
}
