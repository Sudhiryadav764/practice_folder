//Write a program to display names of days of weeks using single –dimension array having length of 7
#include <stdio.h> 
int main() 
{ 

    char days[7][10] = {"Sunday", "Monday",  
                    "Tuesday", "Wednesday",  
                    "Thursday", "Friday", "Saturday"}; 

    int i; 
    for (i = 0; i < 7; i++) 
        printf("%s\n", days[i]); 
    return 0; 
}