#include<iostream>
using namespace std;
main(){
	int *p=new int[7]{1,2,3,4,5,6,7};
	int sum=0;
	cin>>sum;
	int j=0,k=7-1;
	while(j < k) {
		int s = p[j]+p[k];
		if(s==sum) {
		cout<<p[j]<<" "<<p[k]<<endl;
		}
		if(s<sum) j++;
		else k--;
	}
	
	
}
