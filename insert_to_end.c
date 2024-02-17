#include <stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node * next;
};

int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->next=NULL;

    struct node *ptr=malloc(sizeof(struct node));
    struct node *b_end=malloc(sizeof(struct node));

    ptr=head;

    while (ptr!=NULL)
    {
        if (ptr->next==NULL)
        {
            b_end=ptr;
        }
        ptr=ptr->next;
    }

    struct node *toadd=(struct node*)malloc(sizeof(struct node));

    b_end->next=toadd;
    toadd->data=3;
    toadd->next=NULL;

    b_end=head;
    while (b_end!=NULL)
    {
        printf("%d\n",b_end->data);
        b_end=b_end->next;
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