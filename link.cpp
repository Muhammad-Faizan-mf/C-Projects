#include<iostream>
using namespace std;
struct node{
	int d;
	 node *next;
};
node *head;
void del(int);
void insert(int x);
void print();
void insert(int,int);
void insert(int x){
	node *t=new node;
	t->d=x;
	
	t->next=head;
	head=t;
	
}
//void addtotail(int x){
//	if(head==NULL)
//	insert(x);
//	else{
//		node *t=new node;
//		t->d=x;
//		t->next=head;
//		head=t;
//		}
//	
//}


void print(){
		node *h=head;
		cout<<"DATA:\n"	;	
		while(h!=NULL){
		cout<<h->d<<"\n";
		h=h->next;
		}
	
}
void insert(int da,int p){
	node *t=new node;
	t->d=da;
	t->next=NULL;
	if(p==1){
		t->next=head;
		head=t;
		return;
	}
	node *t2=head;
	for(int i=0;i<p-2;i++){
		t2=t2->next;
	}
	t->next=t2->next;
	t2->next=t;
}
int len(){
	int a=1;
	node *t=head;
	while(t!=NULL){
	
	a++;
	t=t->next;
	}return a;
}
void addtotail(int d){
	insert(d,len());
}	
void del(int p){
	node *t=head;
	if(p==1){
		head=t->next;
		delete t;
		return ;
	}
	for(int i=0;i<p-2;i++){
		t=t->next;	
	}
	node *t2=t->next;
	t->next=t2->next;	
	delete t2;
	
}

void delvar(int da){
	node *t=head;
	if(da==t->d){
		head=t->next;
		delete t;
		return ;
	}
	for(t=head;t->d!=da;t=t->next){
		t=t->next;	
	}
	node *t2=t->next;
	t->next=t2->next;	
	delete t2;
	
}
void rev(){
	node *curr,*next,*prev;
	curr=head;
	prev=NULL;
	
	while(curr!=NULL){
		
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
		
		
		
	}
	
	head=prev;
	//return head;
}

main(){
	head=NULL;
	insert(1);
		print();

	insert(2);
	print();
	
	insert(3);
	print();
	
	insert(4);
	print();
	
	
	addtotail(5);	
	print();
	
	insert(8,2);

	print();
	cout<<"Len: "<<len();
	addtotail(99);

	print();
	cout<<"DEL : \n";
	//del(1);
	//print();
	delvar(5);
	print();
	cout<<"REV : \n";
	rev();
	print();
	
	
	
}
