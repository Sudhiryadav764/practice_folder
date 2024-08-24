#include<stdio.h>
int main ()
{
    char days[7][20]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
    int i;
    for(i=0;i<=7;i++){
        printf("%s\n",days[i]);

    }
    return 0;
}