#include<iostream>
using namespace std;
void print(int i,int n){
    if(i<1){
        return;
    }
    print(i-1,n);
    cout<<i<<endl;
}
int main(){
    int i=5,n=5;
    print(5,5);
    
    return 0;
}