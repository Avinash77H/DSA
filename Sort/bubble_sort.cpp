#include<iostream>
using namespace std;

void insertArray(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=(rand()%50)+1;
    }
}
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
void bubble(int arr[],int size){
    for(int j=1;j<size;j++){
        bool swapped=false;
        for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            swapped=true;
        }
    }
    if(swapped==false){
        break;
    }

    }
    
}
int main(){

    int arr[50];
    insertArray(arr,50);
    display(arr,50);
    bubble(arr,50);
    cout<<endl;
    display(arr,50);

    return 0;
}