#include<iostream>
#include"ODSA.h"
#include"UDSA.h"

using namespace std;
main(){
	cout<<"DYNAMIC SAFE ARRAY.\n";
	
	int arr[]={3,5,7,9};
	int b=4;
	ODSA obj(arr,b);
	obj.insertion(8);
	obj.searching();
	
	cout<<"UNORDERED DYNAMIC SAFE ARRAY.\n";
	UDSA ob(arr,b);
	ob.insertion(3);
	
}
