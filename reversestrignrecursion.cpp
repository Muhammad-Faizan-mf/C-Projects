#include<iostream>
using namespace std;
void reverse(string str){
	if(str.size()==0)
	return;
	reverse(str.substr(1));
	cout<<str[0];
}

main(){
	
	string a="Faizan0";
	reverse(a);
	
}
