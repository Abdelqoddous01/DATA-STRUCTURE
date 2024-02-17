#include <stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node * next;
};



int main(){

    
    int arr[]={1,2,3,4,5,6};
    struct node * head=(struct node *)malloc(sizeof(struct node));
    head->data=arr[0];
    head->next=NULL;


    struct node * temp=head;

    for (int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        struct node * ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=arr[i];
        ptr->next=NULL;

        if (head == NULL)
        {
            head=ptr;
            temp=head;
        }
        
        temp->next=ptr;
        temp=ptr;   
    }
    
    struct node * new;
    new=head;

    while (new!=NULL)
    {
        printf("%d\t",new->data);
        new=new->next;
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