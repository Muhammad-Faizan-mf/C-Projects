#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *top=NULL;
void push(int d)
{
	node *t=new node;
	t->data=d;
	t->next=top;
	top=t;
}
void pop(){
	node *t=top;
	top=top->next;
	t->next=NULL;
	delete t;
		
	
}
void display(){
	node *t=top;
	while(t!=NULL){
		cout<<t->data<<"  ";
		t=t->next;
	}
	
}
main(){
	push(5);
	push(102);
	push(9);
	push(0);
	push(1);
	push(5);
	display();
	pop();
	pop();
	
	cout<<"\n";
	display();
	
}
