#include<iostream>
using namespace std;

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
    void selection(int arr[],int size){
    for(int i=0;i<size-1;i++){//1,3,5,4,2
        
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                
            swap(arr[i],arr[j]);

            }
        }
    }
}

int main(){
    int arr[]={1,3,7,2,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    selection(arr,size);
    display(arr,size);
    
    return 0;
}