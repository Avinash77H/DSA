#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;

};
struct Node *head=NULL;
struct Node *tail=NULL;
void insertHead(int data){
    struct Node* ptr=head;
    if(head==NULL){
        struct Node* temp=malloc(sizeof(struct Node));
        temp->data=data;
        temp->next=NULL;
        head=temp;
        tail=temp;
    }
    else{
        struct Node*temp=malloc(sizeof(struct Node));
        temp->data=data;
        temp->next=ptr;
        head=temp;
        tail->next=head;
    }
}
void insertEnd(int data){
    struct Node* ptr=head;
    if(head==NULL){
        struct Node*temp=malloc(sizeof(struct Node));
        temp->data=data;
        temp->next=NULL;
        head=temp;
        tail=temp;
        tail->next=head;
        return;
    }
    else{
        struct Node*temp=malloc(sizeof(struct Node));
        temp->data=data;
        temp->next=NULL;
        while(ptr->next!=head){
        ptr=ptr->next;
        }
        ptr->next=temp;
        tail=temp;
        tail->next=head;
    }
    
}
void insertAtPosition(int value,int position){
    struct Node*ptr=head;
    struct Node*prev=NULL;
    struct Node*temp=malloc(sizeof(struct Node));
    temp->data=value;
    temp->next=NULL;
    while(ptr->data!=position){
        prev=ptr;
        ptr=ptr->next;
    }
    
    prev->next=temp;
    temp->next=ptr;
}
void deleteHead(){
    struct Node*ptr=head;
    if(head==NULL){
        printf("cant delete because list is empty\n");
        return;
    }
    else{
        head=head->next;
        ptr->next=NULL;
        tail->next=head;
        free(ptr);
    }
}
void deleteEnd(){
    struct Node*ptr=head;
    if(head==NULL){
        printf("can't delete because LL is empty\n");
    }
    else{
        struct Node*prev=NULL;
        while(ptr->next!=head){
            prev=ptr;
            ptr=ptr->next;
        }
        tail=prev;
        prev->next=NULL;
        tail->next=head;
        free(ptr);
    }
}
void deleteAtPosition(int position){
    struct Node* ptr=head;
    struct Node* prev=NULL;
    while(ptr->data!=position){
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=NULL;
    prev->next=ptr->next;
    free(ptr);

}
void printLL(){
    struct Node*ptr=head;
    
    if(head==NULL){
        printf("list is empty\n");
        return;
    }
    else{
        do{
        printf("%d ",ptr->data);
        ptr=ptr->next;
   }
   while(ptr!=head);
    }
   
    
}
int main(){
   
    
    insertHead(8);
    insertHead(7);
    insertHead(6);
    insertAtPosition(555,7);
    insertAtPosition(999,555);

    

    
    

    printLL();  
    return 0;
}