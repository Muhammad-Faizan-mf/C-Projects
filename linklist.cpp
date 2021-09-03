#include<iostream>
using namespace std;
struct node{
	int number;
	node *next;
};
bool isempty(node *head);
char menu();
void insertfirstelement(node *&head,node *&last ,int number);
void insert(node *&head,node *&last ,int number);
void remove(node *&head,node *&last );
void showlist(node *curr);



bool isempty(node *head){
	if(head==NULL)
	return true;
	else
	return false;
	
	
	
}
char menu(){
	char ch;
	cout<<"Menu.\n"<<"1.Add an item \n"<<"2.Remove an item\n"<<"3.Show the list.\n"<<"4.Exit";
	
	cout<<"\nEnter choice.\n";
	cin>>ch;
	return ch;
	
}

void insertfirstelement(node *&head,node *&last ,int number){
	
	node *temp=new node;
	temp->number=number;
	temp->next=NULL;
		head=temp;
		last=temp;





}
void insert(node *&head,node *&last ,int number){
	if(isempty(head)){
		insertfirstelement(head,last,number);
	}
	else{
		node *temp=new node;
		temp->number=number;
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
	
}
void remove(node *&head,node *&last ){
	if(isempty(head))
	cout<<"List is empty.\n";
	else if(head==last){
		delete head;
		head=NULL;
		last=NULL;
		}
		else{
			node *t=head;
			head=head->next;
			delete t;
			
			
		}
	
	
	
}
void showlist(node *curr){
	
	if(isempty(curr))
	cout<<"List is empty.\n";
	else
	{
		cout<<"List elements are .\n";
		while(curr!=NULL){
			cout<<curr->number<<"\n";
			curr=curr->next;
			
		}
	}
}



int main(){
	
	node *head=NULL;
	node *last=NULL;
	char cho;
	int n;
	do{
		cho=menu();
		
		switch(cho){
			case '1':cout<<"\nEnter value.\n";
						cin>>n;
						insert(head,last,n);
						break;
			case '2':	remove(head,last);
						break;
			case '3':	showlist(head);
						break;
			default:
			cout<<"System exit.\n";									
			
		}
		
		
	}while(cho!=4);
	
	
	return 0;
}
