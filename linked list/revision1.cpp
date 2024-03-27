#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        cout<<"destructor called for:"<<this->data<<endl;
    }
};
int findLenght(Node* head){
    Node * temp=head;
    int count;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void insertHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        
        Node *newnode=new Node(data);
        head=newnode;
        tail=newnode;
    }
    else{
        Node *newnode=new Node(data);
        newnode->next=head;
        head=newnode;

    }
}
void insertTail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node *newnode=new Node(data);
        tail=newnode;
        head=newnode;
    }
    else{
        Node* newnode=new Node(data);
        tail->next=newnode;
        tail=newnode;
    }
}
void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    int lenght=findLenght(head);
    if(position==1){
        insertHead(head,tail,data);
        return ;
    }
    else if(position==lenght+1){
        insertTail(head,tail,data);
        return ;
    }
    else{
        Node* newnode=new Node(data);
        Node* prev=NULL;
        Node* curr=head;
        while(position!=1){
            position--;
            prev=curr;
            curr=curr->next;
        }
            newnode->next=curr;
            prev->next=newnode;
    }
}

void printLL(Node * head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void deleteNode(Node* &head,Node* &tail,int position){
    int lenght=findLenght(head);
    if(head==NULL){
        cout<<"can't delete because Linked list empty"<<endl;
        return ;
    }
    if(head==tail){
        Node *temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
        return;
    }
    if(position==1){
        Node* temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else if(position==lenght){
    Node* prev=head;
    while(prev->next==tail){
        prev=prev->next;
    }
     prev->next=NULL;
     delete tail;
     tail=prev;

    }
    else{
        Node* prev=NULL;
        Node* curr=head;
        while(position!=1){
            position--;
            prev=curr;
            curr=curr->next;

        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}


int main(){
    Node *head=NULL;
    Node *tail=NULL;
    insertHead(head,tail,11);
    // insertHead(head,tail,22);
    // insertTail(head,tail,33);
    // insertTail(head,tail,34);
    // insertAtPosition(head,tail,44,3);
    // insertAtPosition(head,tail,777,1);
    cout<<"head:"<<head->data<<endl;
    // printLL(head);
     deleteNode(head,tail,1);
    cout<<"after head:"<<head->data<<endl;
    
    
    
    return 0;
}