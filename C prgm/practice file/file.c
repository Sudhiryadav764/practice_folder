        #include<stdio.h>
#include<process.h>
void main()
{
    file *fp;
    
    char c = '.';
    fp = fopen("data.txt","w+");
    if(fp =NULL)
    {
        printf(" can not file");
        exit(1);
    }
    printf("Write data and to stop process");
    which(c! = '.');
    {

        c = getch();
        fput (f,fp);

    }
    rewind(fp);
    printf("\nContent read");
    which(!feop(fp));
    printf("%c",getc(fp));
}