//Write a program in c language to create an array of structure objects.

#include <stdio.h>
#include <stdlib.h>
struct person {
   int id;
   char name[25];
   int age;
};

int main() {
   int i;
   struct person p[5];

   for (i = 0; i < 5; i++) {
      printf("Enter id, name and age respectively: ");
      scanf("%d %s %d", &(p+i)->id, &(p+i)->name, &(p+i)->age);
   }

   printf("Displaying Information:\n");
   for (i = 0; i < 5; i++)
      printf("Id = %d\tName = %s\tAge = %d\n", (p+i)->id, (p+i)->name, (p+i)->age);

   return 0;
}