#include<iostream>
using namespace std;
int LEN=5;
class arr{
	public:
		
		void insert(int *arr,int len){
			cout<<"Enter the values.\n";
			int temp;
			for(int i=0;i<len;i++){
			
			cin>>temp;
			arr[i]=temp;
		}
		}
		void display(int *arr,int len){
			//cout<<"Array of length "<<len<< " is :\n";
			for(int i=0;i<len;i++)
			cout<<arr[i]<<endl;
		}
		void update_through_index(int *arr,int len,int ind){
			for(int i=0;i<len;i++){
				if(i>=ind){
						arr[i]=arr[i+1];				
				}
			}
		}
		void update_through_data(int *arr,int len,int data){
		for(int i=0;i<len;i++){
			if(arr[i]==data){
				cout<<"Enter new value.\n";
				int ndata;
				cin>>ndata;
				arr[i]=ndata;
			}
		}
		
		}
	void update(int *arr,int data,int ind){
		arr[ind]=data;
	}
	void sort(int *arr,int len){
		for(int i=0;i<len ;i++){
			for(int j=i+1;j<len;j++){
			
			if(arr[i]<arr[j]){
				int t;
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
			}
		}
	}
	void increase_len(int *arr,int len){
			int arr_new[LEN];
		len*=2;
		for(int i=0;i<LEN;i++){
			arr_new[i]=arr[i];
		}
		cout<<"Enter new values in array.\n";
		for(int i=5;i<len;i++){
			int d;
			cin>>d;
			arr_new[i]=d;
		}
		
		cout<<"Array after increasing length by 2n.\n";
		for(int i=0;i<len;i++){
			cout<<arr_new[i]<<endl;
		}
		
		
	}
	
};

main(){
	arr array;
	int *arr;
	arr=new int[LEN];
	array.insert(arr,LEN);
	cout<<"Array : \n";
	array.display(arr,LEN);
	array.update_through_index(arr,LEN,0);
	//array.update_through_index(arr,LEN,2);
	//cout<<"Updated array through index is (0=Empty index):\n";
	//array.display(arr,LEN);
	cout<<"Updated array through index : \n";
	array.update(arr,99,3);
	array.display(arr,LEN);
	array.sort(arr,LEN);
	cout<<"Sorted array : \n";
	array.display(arr,LEN);
	array.increase_len(arr,5);
	
}
