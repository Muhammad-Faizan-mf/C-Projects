#include<iostream>
//#include<string.h>
//#include<cstdlib>
using namespace std;
class a{
	int ncols;
	int *da;
	public:
		a(){
			ncols=0;
			da=NULL;
		}
	a(int c){
		ncols=c;
		da=new int[ncols];
	}
	~a(){
		delete []da;
		da=NULL;
	}
	void fill(){
		for(int i=0;i<ncols;i++){
			cin>>da[i];
		}
		
	}
	int &operator [](int i){
		if(i<0||i>ncols-1)
		{
			cout<<"Exceeds boundary.";
			exit(1);
		}
	return da[i];
	}
	a(const a &obj){
		ncols=obj.ncols;
		da=new int[ncols];
		memcpy(da,obj.da,sizeof(int)*ncols);
	}	
	a &operator =(const a &obj){
		if(this==&obj)
		return *this;
		
		delete []da;
		da=NULL;
		
		ncols=obj.ncols;
		da=new int[ncols];
		memcpy(da,obj.da,sizeof(int)*ncols);
		return *this;
		
	}
		
		   a& operator!=(const a& rhs){
       for (int i=0;i<ncols;i++){
           if(da[i]!=rhs.da[i]){
               cout<<"not equal";
               break;
           }
       }
           
           
           
        }
           friend istream &operator>> (istream &input, const a &array)
   {
    int cols;

	cols=array.ncols;

    for (int i = 0; i < cols; i++) {
		
            input >> array.da[i];
        
    }
	return input;
   }

};


main(){
	
	  int columns;
      
      cout<<"enter cols"<<endl;
      cin>>columns;
      a ob1(columns);
      
      ob1.fill();   
      //cin>>ob1; //if not using fill array option, this will call friend function declared for taking input
      a ob2=ob1;
      a ob3;
      
      ob3=ob1;
      cout << ob1[1] << endl;
      cout<<ob2[2]<<endl;     //checking bounds of array
    //  cout<<ob4[2];
	
	
	
}
