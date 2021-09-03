#include <bits/stdc++.h>
using namespace std;

class test{
	int x,y;
	public:
		test(){
		}
		test(int x,int y):x(x),y(y){
		}
		void disp(){
			cout<<x<<endl;
			cout<<y<<endl;
		}
		test operator++(int){
		test temp; 
        temp.x = x+1;
		temp.y = y+1; 
        return temp;
		}
		test operator+(const test &obj){
			test temp;
			temp.x=x+obj.x;
			temp.y=y+obj.y;
			return temp;
		}
};
int main(){
	test obj1(5,10);
	obj1.disp();
	test obj2=obj1++;
	obj2.disp();
	test obj3;
	obj3=obj1+obj2;
	obj3.disp();
}
