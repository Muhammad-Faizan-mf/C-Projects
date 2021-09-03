#include<iostream>
using namespace std;
int n=1;
void odd();
void even(){
	if(n<=10){
		cout<<n-1<<" ";
		n++;
		odd();
		
	}
	return;
}
void odd(){
	if(n<=10){
		cout<<n+1<<" ";
		n++;
		even();
		
	}
	return ;
}
main(){
	odd();
}
