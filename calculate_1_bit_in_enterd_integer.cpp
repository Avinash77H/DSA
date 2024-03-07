#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n:";
    cin>>n;
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<"bit is:"<<count;
    return 0;
}