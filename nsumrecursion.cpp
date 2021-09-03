#include <iostream>

 

using namespace std;

 

int sum(int n)

{

    if(n==1)

    return 1;

 

    else

    return (1/n + sum(n-1));

}

 

int main()

{

    int x;

    cout<<"enter a number: ";

    cin>>x;

 

    cout<<sum(x);

 

    return 0;

}

