#include<iostream>
using namespace std;
int firstOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int answer=-1;
    while(start<=end){
        if(key==arr[mid]){
            answer=mid;
            end=mid-1;
        }
        else if( key < arr[mid]){
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        mid=start+(mid-start)/2;
    }
    return answer;
}
int lastOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int answer=-1;
    while(start<=end){
        if(key==arr[mid]){
            answer=mid;
            start=mid+1;
        }
        else if( key < arr[mid]){
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return answer;
}
pair<int,int>firstAndSecondPair(int arr[],int size,int key){
    pair<int,int> object;
    object.first=firstOcc( arr,size,key);
    object.second=lastOcc( arr,size,key);
    return object;
}
int main(){
    int arr[7]={1,2,3,3,3,3,3};
    //int result1=firstOcc(arr,7,3);
    // int result2=lastOcc(arr,7,3);
    // cout<<"element of 3 first Occurrence is:"<<firstOcc(arr,7,3)<<endl;
    // cout<<"element of 3 last Occurrence is:"<<lastOcc(arr,7,3)<<endl;
    pair<int,int> variable1;
    variable1=firstAndSecondPair(arr,7,3);
    cout<<"element of 3 first Occurrence is:"<<variable1.first<<endl;
    cout<<"element of 3 last Occurrence is:"<<variable1.second<<endl;

    return 0;
}