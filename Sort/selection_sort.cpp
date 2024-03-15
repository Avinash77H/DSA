#include<iostream>
using namespace std;
void selection(int arr[],int size){
    for(int i=0;i<size-1;i++){
        
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                
            swap(arr[i],arr[j]);

            }
        }
    }
}
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,23,2,343,234,23,2,23,2,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    selection(arr,size);
    display(arr,size);
    
    return 0;
}