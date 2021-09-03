#include<bits/stdc++.h>
#include <cstring> 
#include <iostream> 
#include <string.h> 
using namespace std;
class test{
	string first;
	public:
		test(){
		}
		test(string first):first(first){
		}
		void disp(){
			cout<<first<<endl;
		}
		bool operator==(test const &z){
			if(z.first==first){
				cout<<"SAME";
				return true;
        }
        cout<<"Not Same";
			return false;
			
		}
		test operator=(string){
			test z;
		 strcpy(first,z.first);
		 return z;
		}
};
int main(){
	test a("GUL");
	a.disp();
	test b("GUL");
	b.disp();
	if(a==b){
		cout<<"WAH";
	}
	return 0;
}

