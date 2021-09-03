
//#include<iostream>
#include <bits/stdc++.h> 

using namespace std;
class node{
	public:
	int data;
	node *next;
	 	
};
void push(node **headref,int new_data){
	node *new_node=new node();
	new_node->data=new_data;
	new_node->next=(*headref);
	(*headref)=new_node;
}
void insertafter(node *prevnode,int new_data){
	if (prevnode == NULL)  
    {  
        cout<<"the given previous node cannot be NULL";  
        return;  
    } 
	node *newnode=new node();
	newnode->data=new_data;
	newnode->next=prevnode->next;
	prevnode->next=new node;
	
}
void append(node **headref,int newdata){
	node *newnode=new node();
	node *last=*headref;
	newnode->data=newdata;
	newnode->next=NULL;
	if(*headref==NULL)
	{
		*headref=newnode;
		return;
		
	}
	while(last->next!=NULL)
	last=last->next;
	
	last->next=newnode;
	return;
	
}

void printlist(node *ode){
	while(ode!=NULL){
		cout<<" "<<ode->data;
		ode=ode->next;
	}
	
}


main(){
	
	node *head=NULL;
	append(&head,6);
	push(&head,7);
	push(&head,1);
	append(&head,4);
	insertafter(head->next,8);
	cout<<"List is : \n";
	printlist(head);
	
	
}
