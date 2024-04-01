#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head=NULL;
struct Node* tail=NULL;
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
void insertHead(int data){
    struct Node* ptr=head;
    if(head==NULL){
        struct Node* temp=malloc(sizeof(struct Node));
        temp->data=data;
        temp->next=NULL;
        temp->prev=NULL;
        head=temp;
        tail=temp;
    }
    else{
        struct Node*temp=malloc(sizeof(struct Node));
        temp->data=data;
        temp->next=ptr;
        temp->prev=tail;
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
        temp->prev=NULL;
        head=temp;
        tail=temp;
       
        return;
    }
    else{
        struct Node*temp=malloc(sizeof(struct Node));
        temp->data=data;
        temp->next=head;
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
        
        
    }
    
}
void insertAtPosition(int value,int position){
    struct Node*ptr=head;
    struct Node*prevNode=NULL;
    struct Node*temp=malloc(sizeof(struct Node));
    temp->data=value;
    temp->next=NULL;
    while(ptr->data!=position){
        prevNode=ptr;
        ptr=ptr->next;
    }
    
    prevNode->next=temp;
    temp->prev=prevNode;
    temp->next=ptr;
    ptr->prev=temp;
}
void deleteHead(){
    struct Node*ptr=head;
    if(head==NULL){
        printf("cant delete because list is empty\n");
        return;
    }
    else if(head==tail){
        head=NULL;
        tail=NULL;
        free(ptr);
    }
    else{
        head=head->next;
        ptr->next=NULL;
        tail->next=head;
        head->prev=tail;
        free(ptr);
    }
}
void deleteEnd(){
    struct Node*ptr=head;
    if(head==NULL){
        printf("can't delete because LL is empty\n");
    }
    else if(head==tail){
        head=NULL;
        tail=NULL;
        free(ptr);
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
        head->prev=tail;
        free(ptr);
    }
}
void deleteAtPosition(int position){
    struct Node* ptr=head;
    struct Node* prevNode=NULL;
    while(ptr->data!=position){
        prevNode=ptr;
        ptr=ptr->next;
    }
    prevNode->next=NULL;
    prevNode->next=ptr->next;
    ptr->next->prev=prevNode;
    free(ptr);

}
int main(){
    insertHead(10);
    insertHead(20);
    insertEnd(30);
    insertEnd(40);
    insertAtPosition(555,40);
    deleteAtPosition(20);
    printLL();
    return 0;
}