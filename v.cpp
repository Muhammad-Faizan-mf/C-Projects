#include<iostream>
#include<vector>
using namespace std;

main(){
	vector<int> v;
	
	for(int i=0;i<5;i++){
		int a;
		cin>>a;
		v.push_back(a);
		}
	
		v.resize(3);
		       cout << "\nSize : " << v.at(3);
						       cout << "\nMax Size : " << v.capacity();
		   
			   for(int i=0;i<5;i++){
			   	cout<<"\n"<<v[i];
			   }
			   if(v.empty()==0)
			   cout<<"Not Empty";	
	
}
