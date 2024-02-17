#include <stdio.h>
#include <malloc.h>


struct node{
    int a;//element to store
    struct node *next;//pointer to the next node
};





int main(){

    //create head node
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));

    head->a=1;
    head->next=NULL;

    //insert the node to the first of the list 
    struct node * temp;
    temp=(struct node*)malloc(sizeof(struct node));

    temp->a=2;
    temp->next=head;
    //head know will have the adrress of the temp
    head=temp;

    //printing linked list
    temp=head;
    while (temp!=NULL)
    {
        printf("%d\n",temp->a);
        temp=temp->next;
    }

    //free memory
    struct node* current;
    
    current = head;
    while (current != NULL) {
        struct node* nextNode = current->next;
        free(current);
         current = nextNode;
    }

    return 0;
}