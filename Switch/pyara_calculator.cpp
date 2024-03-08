#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter value of a: ";
    cin>>a;
    cout<<"enter value of b:";
    cin>>b;
    cout<<"enter you have perform the operation:";
    cin>>op;

    switch(op){
        case '+':cout<<"answer is:"<<a+b<<endl;
                    break;
        case '-':cout<<"answer is:"<<a-b<<endl;
                    break;
        case '*':cout<<"answer is:"<<a*b<<endl;
                    break;
        case '/':cout<<"answer is:"<<a/b<<endl; 
                    break;
        case '%':cout<<"answer is:"<<a%b<<endl;
                    break;
        default:cout<<"please enter valid operator"<<endl;           
    }
    return 0;
}