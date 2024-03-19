#include<iostream>
using namespace std;
class queue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    queue(int n){
        size=n;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void push(int data){
        if(rear==size){
            cout<<"queue is full"<<endl;
        }
        else if(rear==-1||front==-1){
            rear=0;
            front=0;
            arr[rear]=data;
            rear++;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    void pop(){
        if(front==rear){
            cout<<"queue is empty"<<endl;
        }
        else{
            
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }
    void first(){
        if(front==rear){
            cout<<"queue is empty"<<endl;
        }
        else{
            cout<<arr[front]<<endl;
        }

    }
    bool empty(){
        if(front==rear){
         return true;
        }
        else{
            return false;
        }
    }
    void display(){
        for(int i=front;i<rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"front:"<<front<<endl;
        cout<<"rear:"<<rear<<endl;
    }
    void last(){
        if(front==rear){
            cout<<"queue is empty"<<endl;
        }
        else{
            cout<<arr[rear-1]<<endl;
        }
            
        
    }
};
int main(){
    queue q(5);
    cout<<"queue is empty or not:"<<q.empty()<<endl;
   q.push(11);
   q.push(12);
   q.push(13);
   q.push(14);
   q.push(15);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();

   q.first();
   q.last();

   q.display();
   
    


    return 0;
}