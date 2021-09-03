#include<iostream>
#include"ODSA.h"
using namespace std;

ODSA::ODSA(int *a,int b){
	d=new int[b];
	memcpy(d,a,sizeof(int)*b);
	s=b;
}
void ODSA::insertion(int a){
	s++;
	int *temp;
	temp=new int[s];
	memcpy(temp,d,sizeof(int)*s);
	temp[s-1]=a;
	for(int i=0;i<s;i++){
		for(int j=i;j<s;j++){
			if(temp[i]>temp[j]){
				int t=temp[i];
				temp[i]=temp[j];
				temp[j]=t;
		}
		}
		
		
	}
	delete [] d;
	d=new int[s];
	
	for(int i=0;i<s;i++){
		d[i]=temp[i];
	}
		for(int i=0;i<s;i++){
		cout<<d[i]<<" ";
	}

	
	}

void ODSA::searching(){
	cout<<"Enter value to match\n";
	int a;
	cin>>a;
	for(int i=0;i<s;i++){
		if(d[i]==a)
		cout<<"Index is "<<i<<" \n";
	}
}
void ODSA::print(){
	cout<<"Values are.\n";
	for(int i=0;i<s;i++){
		cout<<d[i]<<"  ";
	}
	
}
