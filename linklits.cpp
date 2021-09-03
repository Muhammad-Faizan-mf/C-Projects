#include<iostream>
#include<cstdlib>
using namespace std;
class node{
	public:
	int d;
	node *next;
	
	node(){
	}
	node(int a,node *n){
		d=a;
		next=n;
	}
};
class list{
	public:
	int length;
	node *head,tail;
	
	
	list(){
		length=0;
		head=NULL;
	}
	~list(){
		cout<<"Data deleted.\n";
	}
	void add(int da){
		node *n=new node;
		n->d=da;
		n->next=head;
		head=n;
		length++;
		
	}
	
	void print(){
		node *h=head;
		
		while(h!=NULL){
		cout<<h->d<<"\n";
		h=h->next;
		}
		
	}
	
void addtosomewhere(int d){
	node *t;
	for(t=head;t->d!=d;t=t->next){
		if(t->next==NULL)
		add(d);
		else{
			t->next=new node(d,t->next);
		}
	}
	
}

void search(int d){
	if(head==NULL)
	cout<<"No data.\n";
	node *t;
	for(t=head;t->d!=d;t=t->next){
		t=t->next;
		cout<<"Data is "<<t->d;
	}
	
}

};

main(){
	list *l=new list;
	l->print();
	l->add(2);
	l->add(3);
	l->add(4);	
	l->print();
//	l->print();	
	
	
	
//	for(int i=0;i<10;i++)
//	l->add(rand()%15);
//	l->print();
//	l->search(3);
//	l->print();
	
	

}

