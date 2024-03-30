#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head=NULL;
struct Node* tail=NULL;
void insertHead(int data){
    struct Node* ptr=head;
    if(head==NULL){
        struct Node* temp=malloc(sizeof(struct Node));
        temp->data=data;
        temp->next=NULL;
        temp->prev=NULL;
        head=temp;
        tail=temp;
        return ;
    }
    else{
        struct Node* temp=malloc(sizeof(struct Node));
        temp->data=data;
        temp->next=ptr;
        temp->prev=NULL;
        while(ptr->prev!=NULL){
            ptr=temp;
        }
        ptr->prev=temp;
        head=temp;
        
        
    }
}
void insertEnd(int value){
    struct Node*ptr=head;
    if(head==NULL){
        struct Node* temp=malloc(sizeof(struct Node));
        
    }
}
void printLL(){
    struct Node* ptr=head;
    if(head==NULL){
        printf("can't print because list is empty\n");
    }
    else{
        while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    }
    
}
int main(){
    insertHead(10);
    insertHead(20);
    insertHead(30);
    printLL();
    


    return 0;
}