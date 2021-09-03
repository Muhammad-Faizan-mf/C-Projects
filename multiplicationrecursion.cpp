#include<iostream>
using namespace std;
int mul(int a,int b){
	if(b==0)
	return 0;
	
	return (a+mul(a,b-1));
	
}


main(){
	cout<<mul(9,5);
}
