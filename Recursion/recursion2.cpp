#include<iostream>
using namespace std;
void reachHome(int src,int des){
    if(des==src){
        cout<<"pahoch gaya"<<endl;
        return ;
    }
    cout<<"src->"<<src<<" des->"<<des<<endl;
    // src++;
    reachHome(++src,des);
}
int main(){
    int des=10;
    int src=1;
    
    reachHome(src,des);
    return 0;
}