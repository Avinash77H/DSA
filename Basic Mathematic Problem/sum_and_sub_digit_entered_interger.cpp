#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n:";
    cin>>n;
    
    
    int sum=0;
    int multi=1;
   while(n!=0){
        int reminder;
        reminder=n%10;
        sum=sum+reminder;
        multi=multi*reminder;
        n=n/10;
   }
   cout<<"sum is:"<<sum<<endl;
   cout<<"multiplication:"<<multi<<endl;
    
    return 0;
}