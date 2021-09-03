#include<iostream>
using namespace std;
main(){
	int a=11;
	int &b=a;
	cout<<a<<"\n"<<b;
	b=22;	
	cout<<"\n"<<a<<"\n"<<b;
//	cout<<&1020;
}
