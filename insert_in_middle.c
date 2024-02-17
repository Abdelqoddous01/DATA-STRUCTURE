#include <stdio.h>
#include <malloc.h>


struct node{
    int data;
    struct node * next;
};


int main(){

    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *end=(struct node*)malloc(sizeof(struct node));

    head->data=1;
    head->next=end;

    end->data=3;
    end->next=NULL;

    //creating the body
    struct node *body=(struct node*)malloc(sizeof(struct node));
    struct node *temp=body;
    body->data=2;
    body->next=NULL;

    head->next=body;
    body->next=end;
    

    struct node *ptr=head;
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }


    struct node* current;
    
    current = head;
    while (current != NULL) {
        struct node* nextNode = current->next;
        free(current);
        current = nextNode;
    }

    return 0;

}