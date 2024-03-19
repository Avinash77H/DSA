#include<iostream>
using namespace std;
class circularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    circularQueue(int n){
        size=n;
        front=-1;
        rear=-1;
        arr= new int[size];
    }
    void push(int data){
       if( (front==0&&rear==size-1)||(rear==(front-1)%(size-1))){
         cout<<"queue is full"<<endl;
       } 
       else if(front==-1){
        front=rear=0;
                 arr[rear]=data;

       }
       else if(rear==size-1&&front!=0){
        rear=0;
                 arr[rear]=data;

       }
       else{
        rear++;
                 arr[rear]=data;

       }
        
         


    }
    void pop(){
      if(front==-1){
        cout<<"queue is empty"<<endl;
      }
      if(front==rear){
        front=rear=-1;
      }
      else if(front==size-1){
        front=0;
      }
      else{
        front++;
      }
    }
    void display(){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"front:"<<front<<endl;
        cout<<"rear:"<<rear<<endl;
    }
};
int main(){
    circularQueue c(5);
    c.push(11);
    c.push(12);
    c.push(13);
    c.push(14);
    c.push(15);
    
    c.pop();
    c.pop();
    c.pop();
    c.pop();
    c.pop();
    
    c.display();
    return 0;
}