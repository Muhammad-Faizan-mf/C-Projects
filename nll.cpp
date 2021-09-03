#include <iostream>
using namespace std;
struct Node { 
   int data; 
   struct Node *next; 
}; 
struct Node* head = NULL ,*tail=NULL;
class list{
public:
void inserttotail(int new_data) { 
	if(head==NULL){
	   Node* new_node = new Node ; 
   	   new_node->data = new_data; 
   	   new_node->next = NULL; 
 	   head = new_node; 
	   tail=new_node;
	   //cout<<tail->data;
	}
	else {
		Node* new_node = new Node ; 
   	   	new_node->data = new_data; 
   	   	tail->next=new_node;
   	   	tail=new_node;
   	   	tail->next=NULL;
	}
} 
void display() { 
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->next; 
   } 
}
void bubblesort(){
	Node *t=new Node;
	t=head;
	while(t->next!=NULL){
		if(t->data > t->next->data){
			int a=t->data;
			t->data=t->next->data;
			t->next->data=a;
		}
		
		
		t=t->next;	
	} 
}
};    
int main() {
list a; 
   a.inserttotail(3);
   a.inserttotail(1);
   a.inserttotail(7);
   a.inserttotail(0);
   a.inserttotail(9);
   cout<<"The linked list is: ";
   a.display(); 
   a.bubblesort();
   cout<<"\nSorted List :\n";
   a.display();
   return 0; 
} 
