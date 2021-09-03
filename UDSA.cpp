#include<iostream>
#include"UDSA.h"
using namespace std;
UDSA::UDSA(int *a,int b){
	d=new int[s];
	memcpy(d,a,sizeof(int)*b);
	s=b;
}
void UDSA::insertion(int a){
	s++;
	int *temp;
	temp=new int[s];
	memcpy(temp,d,sizeof(int)*s);
	temp[s-1]=a;
	
		
		

	delete [] d;
	d=new int[s];
	
	for(int i=0;i<s;i++){
		d[i]=temp[i];
	}
		for(int i=0;i<s;i++){
		cout<<d[i]<<" ";
	}

	
	}

void UDSA::searching(){
	cout<<"Enter value to match\n";
	int a;
	cin>>a;
	for(int i=0;i<s;i++){
		if(d[i]==a)
		cout<<"\nIndex is "<<i<<" \n";
	}
}
