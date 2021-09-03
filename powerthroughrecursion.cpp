#include<iostream>
using namespace std;
int powe(int a,int b){
	if(b!=0){
		
		return (a* powe(a,b--));
	}
	else
	return 1;
}

main(){
	int res=powe(2,4);
	cout << res;
}
