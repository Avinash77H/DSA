#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={{1,2,3,4},{2,2,2,2},{3,3,3,3}};
        int biggest=0;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int column=0;column<4;column++){
            sum+=arr[row][column];
        }
            cout<<sum<<" ";
            if(biggest<sum){
                biggest=sum;
            }
        
    }
    cout<<"biggest sum is:"<<biggest;
    
    return 0;
}
