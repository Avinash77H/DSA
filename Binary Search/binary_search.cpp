#include<iostream>
using namespace std;
 int binarySearch(int arr[],int size,int key){
        int start=0;
        int end=size-1;
        int mid=(start+end)/2;
        
        while(start<=end){
            if(key==arr[mid]){
                return mid;
            }
            else if(key<arr[mid]){
                end=mid-1;
            }
            else if(key>arr[mid]) {
                start=mid+1;
            }
            mid=(start+end)/2;
        }
        return -1;
    }
int main(){
   int arr[7]={1,3,5,7,9,11,13};
   int size=sizeof(arr)/sizeof(int);
   int result;
   
   result=binarySearch(arr,size,11);
   cout<<"index of 11 is :"<<result;
    return 0;
}