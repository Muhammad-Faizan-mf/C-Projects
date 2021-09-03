#include<iostream>
using namespace std;
int missele(int *arr,int n){
	
		for(int i=0;i<n;i++){
		
		if(arr[0]!=0)
		return 0;
		else if( arr[i]!=arr[i+1]+1){
			return arr[i]+1;
		
		}
		}
	
}
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
	int a=0;
	cout<<"Sorted array :\n";
		for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
		
					

}
	cout<<"Smallest missing element : "<<missele(arr,n);
		
}
