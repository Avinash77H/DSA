#include<iostream>
using namespace std;

int sumOfArray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[100],size,sum;
    cout<<"enter size of array:";
    cin>>size;
    cout<<"enter "<<size<<" value in array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sum=sumOfArray(arr,size);
    cout<<"sum of array:"<<sum;
    return 0;
}