#include<iostream>
using namespace std;
/*
    leetcode: quation no:1009
    for example
    n=5 its binary is:101
    1s compliment is:010
              output:2      because 2 binary form is 010 
 */      
int bitwiseComplement(int n){
    int m=n;
   int mask=0;
   if(n==0){
    return 1;
   }
    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int answer= ~n&mask;
    return answer;
}        
int main(){
    int x;
    x=bitwiseComplement(10);
    cout<<"answer is:"<<x;
    return 0;
}