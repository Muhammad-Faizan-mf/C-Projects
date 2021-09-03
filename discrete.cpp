#include<iostream>
using namespace std;
main(){
	cout<<"P  "<<" Q  "<<" R   "<<"-(P V (Q ^ R))"<<"\n\n";
	for(int i=0;i<8;i++){
		int a=1;
		int b=1;
		int c=1;
		if(i%2!=0)
		c--;
		if(i==2||i==3||i==6||i==7)
		b--;
		if(i>=4)
		a--;
		int res=a+(b*c);
		if(res>1)
		res=1;
		string r;
		if(res==1)
		r="F";
		else
		r="T";
		cout<<a<<"   "<<b<<"   "<<c<<"          "<<r<<"\n";
	}
}
