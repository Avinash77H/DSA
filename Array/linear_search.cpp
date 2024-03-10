#include<iostream>
using namespace std;
int count=0;
void insert(int arr[],int size){
    cout<<"enter total "<<size<<" element in array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
bool search(int arr[],int size,int key){
    
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
        else{
            count++;
        }
    }
    return 0;
}
int main(){
    int arr[100];
    int size;
    cout<<"enter size of array:";
    cin>>size;

    insert(arr,size);

    int key;
    cout<<"enter value you want to searching in array:";
    cin>>key;

    int answer;
    answer=search(arr,size,key);
    if(answer==1){
        cout<<key<< " is present in array"<<endl;
        cout<<key<< "is present in array of index :"<<count<<endl;
    }
    else{
        cout<< key<< " is not present in array";
    }


    return 0;
}