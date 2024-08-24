// #include<iostream>
// #include<cmath>
// using namespace std;

// // float calculateSD(float data[]);

// // int main()

// // {
// //     float num;
// //     float data[10];
// //     float sum=0;
// //     float mean;

// //     cout<<"Enter the number your choice :";
// //     cin>>num;

// //     for(int i=1;i<=num;i++)
// //     {
        
// //         cout<<"enter the number :";
// //         cin>>data[i];
// //         sum+=i;
        
// //     }
    
//     mean=sum/num;
//     cout<<mean;

//     cout << endl << "Standard Deviation = " << calculateSD(data);

//     return 0;

// }





// float calculateSD(float data[]) {
//   float standardDeviation = 0.0;
//   int i;



// for(i = 0; i < 10; ++i) {
//     standardDeviation += pow(data[i] - mean, 2);
//   }

//   return sqrt(standardDeviation / 10);
// }


#include <iostream>
#include <cmath>
using namespace std;

float calculateSD(float data[]);

int main() {
  int i,num;
  float data[10];

  cout << "Enter 10 elements: ";
  for(i = 0; i < num; ++i) {
    cin >> data[i];
  }

  cout << endl << "Standard Deviation = " << calculateSD(data);

  return 0;
}

float calculateSD(float data[]) {
  float sum = 0.0, mean, standardDeviation = 0.0;
  int i;

  for(i = 0; i < num; ++i) {
    sum += data[i];
  }

  mean = sum / 10;

  for(i = 0; i < 10; ++i) {
    standardDeviation += pow(data[i] - mean, 2);
  }

  return sqrt(standardDeviation / 10);
}