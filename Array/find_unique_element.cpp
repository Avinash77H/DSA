#include<iostream>
// #include<fstream>
using namespace std;
/*
    // array is 1,2,3,2,1
    once xor property is very good these property are
    any element^same element give answer is zero
    ex. 5^5=0

    ex. array is 1 2 3 2 1
        1^2^3^2^1 is give answer is 3

*/
int findUnique(int arr[],int size){
    int answer=0;
    for(int i=0;i<size;i++){
        answer=answer^arr[i];
    }
    return answer;
}
int main(){
    int arr[100],size;
    cout<<"enter size of array:";
    cin>>size;
    cout<<"enter "<<size<<" element in array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"unique no is:"<<findUnique(arr,size);
    
    
    return 0;
}