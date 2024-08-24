#include<iostream>
using namespace std;

class sudhir
{
    public :
    void sud(int i)
    {
        cout<<"Print the integer number :"<<i<<endl;
    }
        void sud(double f)
    {
        cout<<"Print the float number :"<<f<<endl;
    }
        void sud(string s)
    {
        cout<<"Print the Entered string :"<<s<<endl;
    }
};

int main()
{
    sudhir sss;
    sss.sud(55);
    sss.sud(55.55);
    sss.sud("Hello world!");

    return 0;
}