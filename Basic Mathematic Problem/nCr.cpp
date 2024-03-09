#include<iostream>
using namespace std;
int factorial(int n){
    int answer=1;
    for(int i=1;i<=n;i++){
        answer=answer*i;
    }
    return answer;
     
}
int nCr(int n,int r){
    int num=factorial(n);
    int denum=factorial(r)*factorial(n-r);
    return num/denum;
}
int main(){
    int n,r,NCR;
    cout<<"enter value of n :";
    cin>>n;
    cout<<"enter value of r :";
    cin>>r;

    NCR= nCr(n,r);
    cout<<"NCR is:"<<NCR;

    return 0;
}