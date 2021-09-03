#include<iostream>
using namespace std;
class node{
	public:
		char data;
		node *next;
		
		node(){
			
		}
		node(char d){
			data=d;
			next=NULL;
		}
	
	};
class list{
	public:
		node *head=NULL;
	bool isempty(){
		return head == NULL;
	}
	void push(int d){
		node *t=new node;
		t->data=d;
		t->next=head;
		head=t;
		
	}
	
	char pop(){
		node *t=head;
		char c=t->data;
		head=head->next;
		delete t;
		return c;
	}
	void print(){
		node *t=head;
		while(t!=NULL){
			cout<<t->data<<endl;
			t=t->next;
			
		}
		
		
	}
	
//void revstack(list stk1){
//	cout<<"Values of stack copied\n";
//	list stk2;
//	stk1.print();
//	node *t=head;
//	if(t!=NULL)
//{	
//		while(t!=NULL){
//			stk2.push(t->data);
//			t=t->next;
//		}
//	
//	}
//	cout<<"Data copied in reverse order\n";
//	stk2.print();	
//}

};
main(){
	list s;
	bool flag = true;
	cout<<"Enter string\n";
	string d;
		getline(cin,d);
	for(int i=0;i<d.size();i++){
	
		if(d[i]=='{'||d[i]=='('||d[i]=='[')
	{
		s.push(d[i]);
	}
	else if(d[i]=='}'||d[i]==')'||d[i]==']')
	{
		char c=s.pop();
		//if(c=='}'||c==']'||c==')'){
			if(d[i]=='}'&&c!='{')
			 flag = false ;
			else if(d[i]==']'&&c!='[')
			 flag = false ;
			else if(d[i]==')'&&c!='(')
			 flag = false ;
		
			
		
		
	}
	//	s.push(d[i]);
	}	
	
	//cout<<"Entered values are\n";	
	//stack1.revstack(stack1);
	if( flag == false || !s.isempty() ) cout<<"NO";
	else cout<<"YES";
}
