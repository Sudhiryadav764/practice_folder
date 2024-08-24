#include<iostream>
using namespace std;

class sudhir
{
    int a,b;
    public:
    sudhir(int m,int n)
    {
        a=m;
        b=n;
    }
    void showdata()
    {
        cout<<"first Entered value is :"<<"\t"<<a<<endl;
        cout<<"second Entered value is :"<<"\t"<<b;
    }

};

int main()
{
    int m,n;
    cout<<"Enter first value :";
    cin>>m;
      cout<<"Enter second value :";
    cin>>n;

    sudhir sud(m,n);
    sud.showdata();

    return 0;
}
