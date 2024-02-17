#include <stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node *next;
};


int main(){

    struct node *head=(struct node*)malloc(sizeof(struct node));

    head->data=1;
    head->next=NULL;

    struct node *node1=(struct node*)malloc(sizeof(struct node));

    node1->data=2;
    node1->next=NULL;
    head->next=node1;

    struct node *node2=(struct node*)malloc(sizeof(struct node));

    node2->data=3;
    node2->next=NULL;
    node1->next=node2;

    struct node *node3=(struct node*)malloc(sizeof(struct node));

    node3->data=4;
    node3->next=NULL;
    node2->next=node3;

    struct node *end=(struct node*)malloc(sizeof(struct node));

    end->data=5;
    end->next=NULL;
    node3->next=end;

    int size=0;

    struct node *ptr=head;

    printf("Old linkedlist >>\n");

    while (ptr!=NULL)
    {
        size++;
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }


    int position=2;
    struct node *toInsert=(struct node*)malloc(sizeof(struct node));

    toInsert->data=10;
    toInsert->next=NULL;
    

    ptr=head;

    int traker=1;
    while (traker < position)
    {
        if (traker == position - 1)
        {   
            toInsert->next = ptr->next;
            ptr->next = toInsert;
            break;
        }
        ptr = ptr->next;
        traker++;
    }


    printf("New linkedlist >>\n");

    ptr=head;

    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    


    return 0;
}