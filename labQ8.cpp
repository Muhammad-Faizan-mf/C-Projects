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
	cout<<"Array :\n";
//	for(int i=0;i<n;i++)
//		cout<<arr[i]<<endl;
	int count[5]={1,1,1,1,1};
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				count[i]++;
			}
		}
	}
	cout<<"Value             Occurences\n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"         "<<count[i]<<endl;
}
