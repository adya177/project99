#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;   
        
};

void traversal ( struct node *ptr){
    struct node *p = ptr;

    while (p!=NULL){
        printf("Element is %d",p->data);
        p = p->next;

    }
    

}

struct node* create_list(){
    int n;
    struct node *head,*p;

    printf("Enter how mnay nodes:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        if (i==0){
            head = (struct node *)malloc(sizeof(struct node));
            head = p;
        }
        else{
            p->next = (struct node *)malloc(sizeof(struct node));
            p = p->next;

        }
        printf("Enter data:");
        scanf("%d",&p->data);

    }
    p->next = NULL;
    return head;

}


int main(){
    struct node* head = create_list();
    
    
}

