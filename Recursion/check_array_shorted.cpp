#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        int remainingPart=isSorted(arr+1,size-1);
        return remainingPart;
    }
}
int main(){
    int size=5;
    int arr[size]={1,3,5,6,8};
    bool ans=isSorted(arr,size);
    if(ans){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
    return 0;
}