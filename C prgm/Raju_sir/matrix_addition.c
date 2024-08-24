#include<stdio.h>

int main()
{
    int num1[20][20],num2[20][20],i,j,m,n,sum[20][20];

    printf("Enter number of row\n");
    scanf("%d",&m);
   
    printf("Enter number of colum\n");
    scanf("%d",&n);

    //Entering number of first & second matrix
        for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            printf("\t\tenter  a[%d][%d] value : ",i,j);
            scanf("%d\n",&num1[i][j]);

        }
        }

    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            printf("\t\tenter  a[%d][%d] value : ",i,j);
            scanf("%d\n",&num2[i][j]);

        }
        }
        //printig result display
      
        printf("\t\tsum of two matix :\n");
        for(i=0;i<=m;i++){
            for(j=0;j<=n;j++){
       sum[i][j]=num1[i][j]+num2[i][j];
        printf("sum is %d",sum[i][j]);
      
       
            }
          printf("\n\n");
        }
        

        return 0;
       
}