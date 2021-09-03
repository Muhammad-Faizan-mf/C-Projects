#include<iostream>
using namespace std;
main(){
	int n;
	cout<<"Enter the number of elements in array.\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the values of array.\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
			
}
		
for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j]){
				int t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	cout<<"Seperated values of 0's and 1's are\n";	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
}
}
