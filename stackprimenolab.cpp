#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		
		node(){
			
		}
		node(int d){
			data=d;
			next=NULL;
		}
	
	};
class list{
	public:
		node *head=NULL;
	void isempty(){
		if(head==NULL)
		cout<<"Stack is empty.\n";
		else
		cout<<"Stack is full.\n";
	}
	void push(int d){
		node *t=new node;
		t->data=d;
		t->next=head;
		head=t;
		
	}
	
	void pop(){
		node *t=head;
		head=head->next;
		delete t;
		
	}
	void print(){
		node *t=head;
		while(t!=NULL){
			cout<<t->data<<endl;
			t=t->next;
			
		}
		
		
	}
};

	bool prime(int d){
		int n=d;
		for(int i=2;i<n;i++){
			if(d%i==0)
			return false;
		}
		return true;
		
	}
	
	
main(){
	list l;
	l.isempty();
//	l.push(3);
//	l.push(2);
//	l.push(1);
//	l.print();
//	l.pop();
//	cout<<"POP\n";
//	l.print();
	cout<<"Enter value\n";
	int d;
	cin>>d;
	int n=d;
	for(int i=1;i<n;i++){
		if(n%i==0&& prime(i) )
		l.push(i);
	}
	l.print();
}
