//Write a program in c language to copy structure element from one object to another object.

#include <stdio.h> 
#include <string.h> 

struct Books { 
   char  title[50]; 
   char  author[50]; 
   char  subject[100]; 
   int   book_id; 
}; 

int main() { 
   struct Books Book1;        // Declare Book1 of type Book 
   struct Books Book2;        // Declare Book2 of type Book 

   // book 1 specification 
   strcpy( Book1.title, "C Programming"); 
   strcpy( Book1.author, "Nuha Ali"); 
   strcpy( Book1.subject, "C Programming Task"); 
   Book1.book_id = 6495407; 

   // book 2 specification
   strcpy( Book2.title, "Telecom Billing"); 
   strcpy( Book2.author, "Zara Ali"); 
   strcpy( Book2.subject, "Telecom Billing Task"); 
   Book2.book_id = 6495700; 

   // Print Book1 info by passing address of Book1 
   printf( "Book 1 title : %s\n", Book1.title); 
   printf( "Book 1 author : %s\n", Book1.author); 
   printf( "Book 1 subject : %s\n", Book1.subject); 
   printf( "Book 1 book_id : %d\n", Book1.book_id); 

   // Print Book2 info by passing address of Book2 
   printf( "Book 2 title : %s\n", Book2.title); 
   printf( "Book 2 author : %s\n", Book2.author); 
   printf( "Book 2 subject : %s\n", Book2.subject); 
   printf( "Book 2 book_id : %d\n", Book2.book_id); 

   return 0; 
}