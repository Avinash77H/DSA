#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value  size of array n:";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter value for "<<i<<" index is:";
        cin>>arr[i];
       
    }

    for(int i=0;i<n/2;i++){

        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    cout<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<" value of "<<i<<" index is: "<<arr[i]<<endl;
        
    }

    return 0;
}