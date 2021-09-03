#include<iostream>
using namespace std;
unsigned facto(int a,int b){
	if(a<=0)
	return b;
	facto(a-1,a*b);
}



int fact(int a){
	return facto(a,1);
}
main(){
	cout<<fact(6);
	
}
