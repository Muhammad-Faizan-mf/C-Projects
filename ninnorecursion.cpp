#include<iostream>
using namespace std;
int mini(int *arr,int s){
	if(s==0)
	return 0;
	
	return max(arr[s-1],mini(arr,s-1));
	
}
main(){
	int *arr,s=5;
	arr=new int[s];
	for(int i=0;i<5;i++)
	cin>>arr[i];
	cout<<mini(arr,4);

}
