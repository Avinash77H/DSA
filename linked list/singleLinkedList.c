#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void insertEnd(int value){
    struct Node *ptr=head;
    struct Node *temp=malloc(sizeof(struct Node));
     temp->data=value;
    temp->next=NULL;
    
    if(head==NULL){
        head=temp;
        return;
    }
    while(ptr->next!=NULL){
        ptr=ptr->next;   
    }
        ptr->next=temp;
    return;
}
void insertHead(int value){
    struct Node* ptr=head;
    struct Node* temp=malloc(sizeof(struct Node));
    temp->data=value;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return;
    }
    while(temp->next==NULL){

    temp->next=ptr;
    ptr=temp;
    }
    head=ptr;
    return;
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

void deleteEnd(){
    if(head==NULL){
        printf("can't delete because LL is empty\n");
    }
    else{
        struct Node* ptr=head;
        struct Node* prev=NULL;
        
        while(ptr->next!=NULL){
            prev=ptr;
            ptr=ptr->next;   
        }
        prev->next=NULL;
        free(ptr);
    }
    return;
}
void deleteHead(){
    struct Node* ptr=head;
    if(head==NULL){
        printf("can't delete because LL is empty\n");
    }
    else{
        //  struct Node* nextNode=NULL;

        // while(ptr!=NULL){
        // nextNode=ptr->next;
        // ptr->next=NULL;
        // head=nextNode;
        // free(ptr);
        head=head->next;
        ptr->next=NULL;
        free(ptr);
    }

    
   
    return;
}
int findLenght(){
    struct Node* ptr=head;
    int count=0;
    while(ptr!=NULL){
        count++;
        ptr=ptr->next;
    }
    return count;
}
void insertAtPosition(int value,int position){
    struct Node* ptr=head;
    int lenght=findLenght();
    if(position==1){
        insertHead(value);
        return ;
    }
    else if(position==lenght+1){
        insertEnd(value);
        return ;
    }
    else{
        struct Node* prev=NULL;
        while(position!=1){
            position--;
            prev=ptr;
            ptr=ptr->next;
        }
        struct Node* temp=malloc(sizeof(struct Node));
        temp->data=value;
        temp->next=ptr;
        prev->next=temp;
        return ;
    }
}
void deleteAtPosition(int position){
    struct Node*ptr=head;
    int lenght=findLenght();
    if(position==1){
        deleteHead();
    }
    else if(position==lenght){
        deleteEnd();
    }
    else{
        struct Node* prev=NULL;
        while(position!=1){
            position--;
            prev=ptr;
            ptr=ptr->next;
        }
        prev->next=ptr->next;
        ptr->next=NULL;
        free(ptr);
        return ;
    }
}
int main(){
insertEnd(11);
insertEnd(12);
insertEnd(13);
insertEnd(14);
insertEnd(15);
deleteAtPosition(3);

printLL();



    return 0;
}