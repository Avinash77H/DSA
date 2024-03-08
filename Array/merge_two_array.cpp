#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter size for array1 is:";
    cin>>n;
    cout<<"enter size for array2 is:";
    cin>>m;
    int arr1[n],arr2[m],arr3[n+m];
    for(int i=0;i<n;i++){
        cout<<"Enter the value of arr1 for index "<<i<<":";
        cin>>arr1[i];
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<"Enter the value of arr2 for index "<<i<<":";
        cin>>arr2[i];
    }
    cout<<endl;
    for(int i=0;i<n+m;i++){
        if(i<n){
            arr3[i]=arr1[i];
        }
        else{
            arr3[i]=arr2[i-n];
        }
    }
    cout<<endl;
     for(int i=0;i<n+m;i++){
        cout<<" the value of arr3 for index "<<i<<" is: "<<arr3[i]<<endl;
        
    }
    return 0;
}