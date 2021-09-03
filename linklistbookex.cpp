#include<iostream>
using namespace std;
class intsllnode{
	public:
		int info;
		intsllnode *next;
	
	intsllnode(){
		next=0;
	}
	intsllnode(int a,intsllnode *b=0){
		
		info=a;
		next=b;
	}
	
	
};
class intsllist{
	public:
		intsllnode *head,*tail;
		
	intsllist(){
		head=tail=0;
	}
	int isempty(){
		return head==0;
	}
	~intsllist(){
		for(intsllnode *p;!isempty();){
			p=head->next;
			delete head;
			head=p;
		}
		}
		void addtoheads(int el) {
		head=new intsllnode(el,head);
		if(tail==0)
		tail=head;
	}	
	
	void addtotail(int el)
	{
		if(tail!=0){
			tail->next=new intsllnode(el);
			tail=tail->next;
		}
		else 
		head=tail=new intsllnode(el);
	}
	int deletefromhead(){
		int el=head->info;
		intsllnode *t=head;
		if(head==tail)
		head=tail=0;
		else
		head=head->next;
		delete t;
		return el;	
	}
	int deletefromtail(){
		int el=tail->info;
		if(head==tail){
			delete head;
			head=tail=0;
		}
		else{
			intsllnode *t;
			for(t=head;t->next!=tail;t=t->next);
			delete tail;
			tail=t;
			tail->next=0;
		}
	}
	
	void deletenode(int el){
		if (head != 0) // if nonempty list;
if (head == tail && el == head->info) { // if only one
delete head; // node in the list;
head = tail = 0;
}
else if (el == head->info) {// if more than one node in the list
intsllnode *tmp = head;
head = head->next;
delete tmp; // and old head is deleted;
}
else { // if more than one node in the list
intsllnode *pred, *tmp;
for (pred = head, tmp = head->next; // and a nonhead node
tmp != 0 && !(tmp->info == el);// is deleted;
pred = pred->next, tmp = tmp->next);
if (tmp != 0) {
pred->next = tmp->next;
if (tmp == tail)
tail = pred;
delete tmp;
}
}
}
		
		bool isinlist(int el) const {
intsllnode *tmp;
for (tmp = head; tmp != 0 && !(tmp->info == el); tmp = tmp->next);
return tmp != 0;
}
	
};



main(){
	
			
			
			
}
