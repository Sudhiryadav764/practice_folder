#include<iostream>
using namespace std;

int main()

{
    float n1,n2;

cout<<"\n\n\t----------Welcome to calculator program : --------" <<endl;

cout<<"\nEnter the two number :\n\n";

cout<<"Enter the first number :";
cin>>n1;
cout<<"Enter the second number :";
cin>>n2 ;


float sum,sub,mul,division;

     sum= n1+n2;
     sub= n1-n2;
     mul= n1*n2;
	 division= n1/n2;
       cout<<"\n\nThe sum is n1 and n2="<<sum <<endl;
       cout<<"\n\n\t-----------------------------" <<endl;
       cout<<"The subtraction is n1 and n2="<<sub <<endl;
        cout<<"\n\n\t-----------------------------" <<endl;
       cout<<"The multiplication is n1 and n2 ="<<mul <<endl;
        cout<<"\n\n\t-----------------------------" <<endl;
       cout<<"The division is n1 and n2="<<division <<endl;
        cout<<"\n\n\t-----------------------------" <<endl;

       cout<<"-----THANK YOU-----\n\n";
    
    return 0;

}