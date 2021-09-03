#include<iostream>
using namespace std;
main(){
	cout<<"P  "<<" Q"<<"     -(P V -(P^Q))"<<endl;
	for(int i=0;i<4;i++){
		int b=1;
		int c=1;
		if(i%2!=0)
		c--;
		if(i==2||i==3||i==6||i==7)
		b--;
		
		int s=b*c;
		if(s==1)
		s=0;
		if(s==0)
		s=1;
		int res=b+s;
		if(res>1)
		res=1;
		if(res==1)
		res=0;
		else
		res=1;
		
		
		cout<<b<<"   "<<c<<"          "<<res<<"\n";
		
	}
	cout<<"\n"<<"IS CONTIGENCY.";
}
