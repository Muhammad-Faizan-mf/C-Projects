#include<iostream>
using namespace std;
main(){
	
	int l;
	int *p=new int[l];
	cout<<"Enter size of array.\n";
	cin>>l;
	cout<<"Enter array values.\n";
	for(int i=0;i<l;i++){
		cin>>p[i];
	}
	for(int i=0;i<l;i++){
		cout<<p[i]<<endl;
	}
	
	
	
}
