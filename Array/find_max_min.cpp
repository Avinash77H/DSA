#include<iostream>
#include<climits>
using namespace std;
int findMax(int arr[],int size){ // also use max and min function
        int max=INT_MIN; 
                                 // maxi=max(maxi,arr[i]);
    for(int i=0;i<size;i++){     // its meanse maxi and arr[i] mathi 
        if(arr[i]>max){          // je motu hoy e maxi ni under store 
            max=arr[i];          // karse
        }
        
    }
    return max;
}
int findMin(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int size;
    cout<<"enter size:";
    cin>>size;
    int arr[100];
    cout<<"enter value of array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"maximum value is:"<<findMax(arr,size)<<endl;
    cout<<"minimum value is:"<<findMin(arr,size)<<endl;
    return 0;
}