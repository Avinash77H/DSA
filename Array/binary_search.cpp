#include<iostream>
using namespace std;
int main(){
    int element;
    int arr[]={1,5,7,9,11,13,18};
    int lenght=sizeof(arr)/sizeof(int);
    int mid=lenght/2;
    cout<<"enter value you want search in array:";
    cin>>element;
    if(element==arr[mid]){
        cout<<"element present in array of index:"<<mid<<endl;
    }
    else if(element<mid){
        for(int i=0;i<=mid-1;i++){
            if(element==arr[i]){
                cout<<"element present in array of index:"<<i<<endl;
            }
        }
    }
    else if(element>mid){
        for(int i=mid+1;i<=lenght-1;i++){
            if(element==arr[i]){
                cout<<"element present in array of index:"<<i<<endl;
                
            }
            
        }
    }
    else {
        cout<<"element not present in array"<<endl;
    }
    return 0;
}