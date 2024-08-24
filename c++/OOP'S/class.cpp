#include<iostream>
using namespace std;

class student
{
    char name,address;
    int roll,cont;
    
    public :
   

void function1()
{
    cout<<"Enter Student Name :";
    cin>>name;
     cout<<"Enter Student address :";
    cin>>address;
     cout<<"Enter Student rollno :";
    cin>>roll;
     cout<<"Enter Student cont :";
    cin>>cont;

}
 
void function2()
{

    cout<<"Name="<<name;
     cout<<"Address="<<address;
      cout<<"Roll="<<roll;
       cout<<"Cont="<<cont;
}

};

void main()
{
   student std;
    std.function1();
    std.function2();
    
}