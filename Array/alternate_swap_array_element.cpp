#include<iostream>
using namespace std;
void swap(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
        // swap((arr[i]),arr[i+1]);
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        }
        
    }
}
void display(int arr[],int size){
     cout<<"-> display time <-"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[100],size;
    cout<<"enter size of array:";
    cin>>size;
    cout<<"enter "<< size<<" element in array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    swap(arr,size);
    display(arr,size);

    
   
    return 0;
}