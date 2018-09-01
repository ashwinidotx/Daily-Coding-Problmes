#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node *next;
};
struct node * head=NULL;

void Insert(int value){
   struct node * temp= (struct node*)malloc(sizeof(struct node));
   temp->value=value;
   temp->next=head;
   head=temp;
}

void print()
{
    struct node* temp=head; //(struct node*)malloc(sizeof(struct node));
    while(temp!=NULL)
    {
        printf(" '%d'",temp->value);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{   int n,i=0;
    struct node* current=head; //(struct node*)malloc(sizeof(struct node));
    struct node* printme=head; //(struct node*)malloc(sizeof(struct node));
    // Adding some values:
    Insert(7);
    Insert(6);
    Insert(5);
    Insert(4);
    Insert(3);
    Insert(2);
    Insert(1);
    print();

    printf("Enter Nth value: ");
    scanf("%d",&n);
    
    while(i!=n)
    {   
        current=current->next;
        i++;                            // Used to reach to the Nth position
    }
    
    while(current->next!=NULL)
    {                          // gets us to the Nth element in the LL.
        current=current->next;  
        printme=printme->next;
    }
    printf("\n Nth Value is : '%d'",printme->value);
    return 0;
}