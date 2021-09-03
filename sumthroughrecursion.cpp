#include<iostream>
using namespace std;
int sum(int a){
	if(a>0){
		return (a%10+ sum(a/10));
	}
	return 0;
}

main(){
	cout<<sum(1555);
}
