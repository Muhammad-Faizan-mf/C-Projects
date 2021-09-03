#include<iostream>
using namespace std;
void repeatelement(char *arr,int s){
//	cout<<"\nRepeating element is " ;
	for(int i=0;i<s;i++){
		for(int j=i+1;j<s;j++){
			if(arr[j]==arr[i]){
				arr[j]='-';
				//cout<<arr[i]<<" ";
			}
		}
	}
	
}

main(){
	char *arr;
	arr=new char[5];
	for(int i=0;i<5;i++)
	cin>>arr[i];
	int s=sizeof(arr)/sizeof(arr[0]);
	repeatelement(arr,5);
	for(int i=0;i<5;i++)
	cout<<arr[i]<<" ";
	
	
}
