#include<iostream>
#include<string>
#include<cstring>

using namespace std;
string revstr;
class node{
	public:
		char sign;
		int data;
		char x;
		int pow;
		node *next;
		
	node(){
		
	}
	node(int d,char a,int p,char s){
		data=d;
		x=a;
		pow=p;
		next=NULL;
		sign=s;
		
	}
	node(int d,node *n){
		data=d;
		next=n;
	}
};
class list{
	node *tail=NULL,*head=NULL;
	public:
		void insert(int d,char a,int p,char s){
			if(tail==NULL){
				
				tail=new node(d,a,p,s);
				head=tail;
			}
			else{
				tail->next=new node(d,a,p,s);
				tail=tail->next;
			}
		}

	void show(){
		node *t=head;
		int i=0;
		if(head!=NULL){
			
			while(t!=NULL){
				if(t->pow==1){
					if(i==0){
					i++;
				cout<<t->data<<t->x;
					}
					else
				cout<<t->sign<<t->data<<t->x;
					
				}
				
				else if(t->pow==0){
					
					if(i==0){
					i++;
				cout<<t->data<<t->x;
					}
					else
				cout<<t->sign<<t->data;
					
				}
				else{
				
				cout<<t->sign<<t->data<<t->x<<"^"<<t->pow;
			}
				t=t->next;
			
			}
			
		}
	}

};


main(){
	list li;
	li.insert(10,'x',1,'+');
	li.insert(100,'x',0,'-');
	li.insert(5,'x',4,'-');
	li.insert(9,'x',33,'-');
	li.insert(5,'x',99,'+');
		
	li.show();


}
