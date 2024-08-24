#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};
struct node *create_list(struct node *start);
void display(struct node *start);
void count(struct node *start);
void search(struct node *start,int data);
struct node *addatbeg(struct node *start,int data);
struct node *addatbeg(struct node *start,int data);
struct node *addatbeg(struct node *start,int data,int item);
struct node *addatbeg(struct node *start,int data,int item);
struct node *addatbeg(struct node *start,int data,int pos);
struct node *addatbeg(struct node *start,int data);
struct node *addatbeg(struct node *start);
int main()
{
    printf("*1.Create List\n");
    printf("*2.Display\n");
    printf("*3.Count\n");
    printf("*4.Search\n");
    printf("*5.Add empty list / Add at beginning\n");
    printf("*6.Add at end\n");
    printf("*7.Add after node\n");
    printf("*8.\n");
    printf("*9.\n");
    printf("*10.\n");
    printf("*11.\n");
    printf("*12.\n");
    printf("Enter your choice :");
    scanf("%d",&choice);
}