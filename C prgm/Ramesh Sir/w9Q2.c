/*Write a program in c language to read and display the car number,
starting time and reaching time. Use structure within structure.*/

#include <stdio.h>

struct time
{
    int hour;
    int minute;
};

struct car
{
    char number[10];
    struct time start;
    struct time reach;
};

int main()
{
    int i;
    struct car c[5];
    for (i = 0; i < 5; i++)
    {
        printf("Car %d\n", i + 1);
        printf("Enter car number: ");
        scanf("%s", &c[i].number);
        printf("Enter starting time: ");
        scanf("%d %d", &c[i].start.hour, &c[i].start.minute);
        printf("Enter reaching time: ");
        scanf("%d %d", &c[i].reach.hour, &c[i].reach.minute);
    }
    printf("Details of cars\n");
    for (i = 0; i < 5; i++)
    {
        printf("Car %d\n", i + 1);
        printf("Number: %s\n", c[i].number);
        printf("Starting time: %d:%d\n", c[i].start.hour, c[i].start.minute);
        printf("Reaching time: %d:%d\n", c[i].reach.hour, c[i].reach.minute);
    }
    return 0;
}