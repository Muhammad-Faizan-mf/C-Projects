#include<iostream>
using namespace std;
main(){
	int arr1[]={1,2,3,5};
	int arr2[]={4,6,8,9};
	int *p;
	int s1=4;
	int s2=4;
	
	p=new int[s1+s2];
	int j=0,k=0;
	for(int i=0;i<s1+s2;i++){
		
		if(arr1[j]<arr2[k] & j<s1){
			p[i]=arr1[j];
			j++;
			
		}
		else if(k<s2){
			p[i]=arr2[k];
			k++;
		}
	}	
	for(int i=0;i<s1+s2;i++){
		cout<<p[i]<<endl;
		
	}
	
}
