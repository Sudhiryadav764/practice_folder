#include<iostream>
using namespace std;

class student
{
    //char name;
    int roll;
    public :
    student()
    {
    
       // name="sudhir";
        roll=23;
    } 
        void showdata()
        {
            //cout<<"\nName ="<<name;
            cout<<"\nroll ="<<roll;
        }
    
};
int main()

{
  
  student sud;
  sud.showdata();
 return 0;

}