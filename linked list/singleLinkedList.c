#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void insert(int value){
    struct Node *ptr=head;
    struct Node *temp=malloc(sizeof(struct Node));
    
    
    if(head==NULL){
        temp->data=value;
        temp->next=NULL;
        head=temp;
        return;
    }
    else{
        temp->data=value;
        temp->next=NULL;
    }
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
    
    
}
void printLL(){
    struct Node* ptr=head;
    if(head==NULL){
        printf("can't print because linkedList is empty");
    }
    else{
         while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    }
   
}
int main(){
    insert(10);
    insert(20);
    printLL();


    return 0;
}