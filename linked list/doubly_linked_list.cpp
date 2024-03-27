#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(){
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
void printLL(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int findLenght(Node* &head){
    Node * temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void insertHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
    }
    else{
        Node* newnode=new Node(data);
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
    
}
void insertTail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
    }
    else{
        Node* newnode=new Node(data);
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}
void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    if(head==NULL){
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
    }
    else{
        int lenght=findLenght(head);
        if(position==1){
            insertHead(head,tail,data);
        }
        else if(position==lenght+1){
            insertTail(head,tail,data);
        }
        else {
            Node*newnode=new Node(data);
            Node* prevNode=NULL;
            Node* currNode=head;
            while(position!=1){
                position--;
                prevNode=currNode;
                currNode=currNode->next;
            }
            prevNode->next=newnode;
            newnode->prev=prevNode;
            newnode->next=currNode;
            currNode->prev=newnode;
        }
    }

}
void deleteNode(Node* &head,Node* &tail,int position){
    if(head==NULL){
        cout<<"can't delete because linkedlist is empty"<<endl;
        return ;
    }
    if(head==tail){
        Node*temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
    }
    int lenght=findLenght(head);
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
    }
    else if(position==lenght){
        Node* prevNode=tail->prev;
        prevNode->next=NULL;
        tail->prev=NULL;
        delete tail;
        tail=prevNode;
    }
    else{
        Node* prevNode=NULL;
        Node* currNode=head;
        while(position!=1){
            position--;
            prevNode=currNode;
            currNode=currNode->next;

        }
        Node* nextNode=currNode->next;
        prevNode->next=nextNode;
        currNode->prev=NULL;
        currNode->next=NULL;
        nextNode->prev=prevNode;
        delete currNode;

    }

}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    
    
   
    
    int lenght=findLenght(head);
    cout<<"lenght:"<<lenght<<endl;
    deleteNode(head,tail,1);
   
    return 0;
}