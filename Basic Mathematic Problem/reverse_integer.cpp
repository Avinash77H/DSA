#include<iostream>
using namespace std;
int reverse(int n){
    int answer=0;
    int max,min;
    while(n!=0){
        int digit=n%10;
        answer=(answer*10)+digit;
        
        n=n/10;

    }
    return answer;
}
int main(){
    int jawabb;
    jawabb=reverse(12345678911);
    cout<<"reverse value is:"<<jawabb;
    return 0;
}