#include<iostream>
using namespace std;

int power(int x,int n){
    if(n==0){
        return 1;
    }
    else if(x==0){
        return 0;
    }
    int pow=power(x,n-1);
    int ans=x*pow;
    return ans;
}

int main(){
    cout<<power(2,25);
    
    
    return 0;
}