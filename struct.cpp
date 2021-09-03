#include<iostream>
using namespace std;
struct abc{
	int a;
	int b;
	
};


main(){
	abc c[5];
//	c.a="ajshdjsgh";
//	c.b=6;
//	cin>>c.a>>c.b;
//	
	for(int i=0;i<2;i++)
	cin>>c[i].a>>c[i].b;
	
	for(int i=0;i<2;i++)
	cout<<c[i].a<<c[i].b<<endl;
	
}
