#include<iostream>
using namespace std;
int main()
{

int n;

cout<<"Enter the Number :";
cin>>n;


for(int i=0;i<=n;i++){
    for(int j=0;j<=i;j++){

        cout<<j+1;
    }
   cout<<"\n";
    }
     
return 0;

}