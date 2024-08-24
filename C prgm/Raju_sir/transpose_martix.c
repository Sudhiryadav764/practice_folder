#include<stdio.h>
int main()
{
    int a[4][4],trans[10][10],row,col,i,j;
    printf("enter value of row and column ::");
    scanf("%d%d",&i,&j);

    //input 2d arra;
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++)   
            printf("Enter number%d%d ::",i,j) ;
            scanf("%d",&a[i][j]); 
        }
    for(i=1;i<=row;i++)
        for(j=1;j<=col;j++) {  
            printf("Enter number%d%d ::",i,j) ;
            scanf("%d",&a[i][j]); 
        }
    
    
      //displaY 2d ARRAY
       for(i=1;i<=row;i++){
        for(j=1;j<=col;j++) { 
          if(j == col-1)
             printf("%5d",a[i][j]) ;  
        }
       printf("\n");
    }
    printf("\n");
    // display transposr matrim
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++) { 
             printf("%5d",a[i][j]) ; 

        }
        printf("\n");
    }

    }

/*#include <stdio.h>
int main() {
  int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i, j);
    scanf("%d", &a[i][j]);
  }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("5%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  // computing the transpose
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  return 0;
}*/