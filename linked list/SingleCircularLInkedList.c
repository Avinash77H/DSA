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
void insertEnd(int data){ 
    struct Node*ptr=head; 
    if(head==NULL){ 
        struct Node* temp=malloc(sizeof(struct Node)); 
        temp->data=data; 
        temp->next=NULL; 
        temp->prev=NULL; 
        head=temp; 
        tail=temp; 
        return; 
    } 
    else{ 
        struct Node* temp=malloc(sizeof(struct Node)); 
        temp->data=data; 
        temp->next=NULL; 
        temp->prev=ptr; 
        while(ptr->next!=NULL){ 
            ptr=ptr->next; 
        } 
        ptr->next=temp; 
        tail=temp; 
 
    } 
} 
void deleteHead(){ 
    struct Node* ptr=head; 
    if(head==NULL){ 
        printf("can't delete because list is empty\n"); 
        return; 
    } 
    head=head->next; 
    ptr->next=NULL; 
    head->prev=NULL; 
    free(ptr); 
} 
void deleteEnd(){ 
    struct Node* ptr=head; 
     
    if(head==NULL){ 
        printf("can't delete because list is empty\n"); 
        return; 
    } 
    struct Node* prevNode=NULL; 
    while(ptr->next!=NULL){ 
        prevNode=ptr; 
        ptr=ptr->next; 
    } 
    prevNode->next=NULL; 
    ptr->prev=NULL; 
    tail=prevNode; 
    free(ptr); 
} 
void insertAtPosition(int data,int position){ 
    struct Node*ptr=head; 
    struct Node* prevNode=NULL; 
    struct Node* temp=malloc(sizeof(struct Node)); 
    temp->data=data; 
    temp->next=NULL; 
    temp->prev=NULL; 
    while(ptr->data!=position){ 
        prevNode=ptr; 
        ptr=ptr->next; 
    } 
    prevNode->next=temp; 
    temp->prev=prevNode; 
    temp->next=ptr; 
    ptr->prev=temp; 
} 
void deleteAtPosition(int position){ 
    struct Node*ptr=head; 
    struct Node* prevNode=NULL; 
     while(ptr->data!=position){ 
        prevNode=ptr; 
        ptr=ptr->next; 
    } 
    prevNode->next=ptr->next; 
    ptr->next->prev=prevNode; 
    free(ptr); 
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
    insertEnd(11); 
    insertEnd(12); 
     
    deleteAtPosition(20); 
    deleteAtPosition(11); 
    deleteAtPosition(10); 
     
     
 
     
     
     
    printLL(); 
     
 
 
    return 0; 
}