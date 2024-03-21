#include<iostream>
using namespace std;
int binarySearch(int arr[],int start,int end,int key){
    
    int mid=(start+(end-start))/2;
    if(start<=end){
        
        return 0;
    }
    if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            return binarySearch(arr,start,mid-1,key);

            
        }
        else{
            return binarySearch(arr,mid+1,end,key);
        }
    

}
int main(){
    int arr[]={1,3,5,7,8,22};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=8;
    int result=binarySearch(arr,0,size-1,key);
    cout<<key<<" present index of "<< result<<endl;

    return 0;
}