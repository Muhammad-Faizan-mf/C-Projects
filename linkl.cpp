#include<iostream>
using namespace std;
class node{
	public:
		int d;
		node *n;
};
class list{
	public:
		void push(node** head_ref, int new_data)  
{  
    node* new_node = new node(); 
  new_node->d = new_data;  
    new_node->n = (*head_ref);  
    (*head_ref) = new_node;  
}
 		void addtotail(node** head_ref, int new_data)  
{  node *t=*head_ref;
    node* new_node = new node(); 
  new_node->d = new_data;  
	new_node->n=NULL;
	while(t->n!=NULL){
		t=t->n;
	}
	t->n=new_node;
	

}

	void deletehead(node **h){
		node *t=*h;
		*h=(*h)->n;
		
		delete t;
		
	}
	
	void deletetail(node **h){
	
	node *t=*h;
	while(t->n->n!=NULL){
		t=t->n;
	}
	delete t->n;
	t->n=NULL;	
	}
  
  
	void print(node *head){
		node *t=head;
		while(t!=NULL){
			cout<<t->d<<"\n";
			t=t->n;
		}
	}

	void addpos(node **h,int d,int p){
		if(p==1)
		{
			node *t=*h;
			node *ne=new node;
			ne->d=d;
			ne->n=*h;
			*h=ne;
		}
else{
	
		node *t=*h;
		for(int i=0;i<p-2;i++){
			t=t->n;
		}
		node *no=new node;
		no->d=d;
		no->n=t->n->n;
	t->n=no;		
	}
}	
void addatdata(node **h,int d,int pd){
	node *t=*h;
	for(t=*h;t->n->d!=pd;t=t->n){
		
	}
	node *ne=new node;
	ne->d=d;
	t->n=ne;
	ne=t;
	
}
node * reverse(node **h){
	node *next,*curr,*prev;
	curr=*h;
	prev=NULL;
	while(curr!=NULL){
		next=curr->n;
		curr->n=prev;
		prev=curr;
		curr=next;
		
		
		
	}
	*h=prev;
	return *h;
	
}	
};
main(){
	node *head=new node;
	head=NULL;
	
	list *l1;
	l1->push(&head,2);
	l1->push(&head,3);
	l1->push(&head,4);
	l1->addtotail(&head,11);
	l1->addtotail(&head,22);
	
	l1->push(&head,0);
	l1->print(head);
	cout<<"Delete head.\n";
	l1->deletehead(&head);
	l1->print(head);
	cout<<"Delete tail.\n";
	l1->deletetail(&head);
	l1->print(head);
	cout<<"\nAdd at pos 3\n";
	l1->addpos(&head,94,1);
	l1->print(head);
//	cout<<"Add at data pos.\n";
//l1->addatdata(&head,94,4);
//	l1->print(head);
	
	cout<<"\nReverse\n";
	l1->reverse(&head);
	l1->print(head);

	

}
