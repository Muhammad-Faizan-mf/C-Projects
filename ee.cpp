#include<iostream>
using namespace std;
main(){
	string a="33";
	int an=0;
	for(int i=0;i<2;i++){
		an=an*10+(int)a[i]-48;
	}
	cout<<an;
}
