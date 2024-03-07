#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n:";
    cin>>n;
    int bit;
    int answer=0;
    int i=0;
    while(n!=0){
        bit=n&1;
        answer=(bit*pow(10,i))+answer;
        n=n>>1;
        i++;
    }
    cout<<"answer:"<<answer<<endl;
    
    return 0;
}