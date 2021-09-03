#include<iostream>
#include<string>
#include<cstring>

using namespace std;
string revstr;
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
	node(int d,node *n){
		data=d;
		next=n;
	}
};
class list{
	node *tail=NULL,*head=NULL;
	public:
		
		void insert(int d)
		{
			if(tail==NULL){
			
			tail=new node(d);
			head=tail;
			}
			else{
				
				tail->next=new node(d);
				tail=tail->next;
				
				
			}
		}
		void print(){
			node *t=head;
			while(t!=NULL){
				cout<<t->data<<endl;
				t=t->next;
			}
			
		}
	int getindex(int ind,int s){
		node *t=head;
		if(ind==1){
			return t->data;
		}
		else if(ind==s){
			return tail->data;
		}
		else{
			int count=1;
			while(count!=ind){
				t=t->next;
				count++;
			}
			return t->data;
			
		}
		
	}
	
};
class palindrome{
	
	public:
		int len,index;
	
		palindrome( ){
			len=1;
			index=1;
		}
		string palind(string str){
			
		//	cout << "Recievde : " << str << endl;
			int size=str.size();
			bool **arr;
			string temp="";
			arr=new bool*[size];
			for(int i=0;i<=size;i++){
				arr[i]=new bool[size];
				memset(arr[i],false,sizeof(bool)*size);
			}
			for(int i=0;i<size;i++){
				arr[i][i]=true;
			}
			for(int i=0;i<size-1;i++){
				if(str[i]==str[i+1]){
					arr[i][i+1]=true;
					len=2;index=i;
				}
			}
			for(int a=3;a<=size;a++){
				for(int i=0;i<size-a+1;i++){
					int j=i+a-1;
					if((arr[i+1][j-1]) && (str[i]==str[j] )){
						arr[i][j]=true;
						index=i;
						len=a;
					}
				}
				
			}
			for(int i=index;i<=len + index -1;i++){
					temp +=str[i];
				}
			
		//	cout << "Index : " << index <<  endl << " len : " << len <<endl;
			
	return temp;
	
		}
	
};
void concatinate(int a){
			
			string str="",tempstr="";
			while(a){
				str+=a%10 +'0';
		a/=10;
			}
		for(int i=str.size()-1;i>=0;i--){
			tempstr+=str[i];
		}
	revstr+=tempstr;
	
}

main(){
	list l;
	l.insert(	13676);
	//concatinate(12451);
	
	l.insert(11342
);
	
	
	l.insert(14241
);
	//concatinate(1121111342);
//	concatinate(11342);
	
	l.insert(243
);
//	concatinate(4318);
	
	l.insert(1113
);
//	concatinate(12);
	
	l.insert(424
);
//	concatinate(1);
	l.insert(823782
);
	
	//concatinate();
	
	l.print();
	for(int i=1;i<=7;i++){
		concatinate(l.getindex(i,7));
	}

	//concatinate(11211);
	//concatinate(1115);
	//concatinate(111);
	cout<<revstr;
	palindrome a;
	cout<<"\nResult";
	cout<< endl <<  a.palind(revstr);
	
	//cout<<l.getindex(2,6);
}
