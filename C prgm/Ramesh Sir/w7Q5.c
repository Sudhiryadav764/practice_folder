//Write a program to use two function as argument for another function.
#include <stdio.h> 
int add(int x, int y) 
{ 
    return x + y; 
} 

int subtract(int x, int y) 
{ 
    return x - y; 
} 

int operation(int x, int y, int (*functocall)(int, int)) 
{ 
    int g; 
    g = (*functocall)(x, y); 
    return g; 
} 

int main() 
{ 
    int m, n; 
    int choice;
    printf("Enter two numbers:");
    scanf("%d %d",&m,&n);
    printf("Enter your choice(1 for addition and 2 for subtraction):");
    scanf("%d",&choice);
    int answer; 
    switch (choice)
    {
     case 1: answer = operation(m, n, add); 
            break;
     case 2: answer = operation(m, n, subtract); 
            break;
     default: printf("Wrong choice");
    }
    printf("Answer = %d\n", answer); 
    return 0; 
}