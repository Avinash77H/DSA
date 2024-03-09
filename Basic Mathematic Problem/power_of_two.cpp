#include<iostream>
#include<math.h>

using namespace std;
/*
    leetcode-> quation no.231 power of two

*/
bool isPowerOfTwo(int n){
    for(int i=0;i<=31;i++){ // int range 2 power 31 to (2 power 31)-1
       int answer=pow(2,i); // hence run loop 2 power of 30
       if(answer==n){
        return 1;
       }
    }
    return 0;
}
int main(){
    int x=isPowerOfTwo(8);
    cout<<"answer is:"<<x;
    return 0;
}