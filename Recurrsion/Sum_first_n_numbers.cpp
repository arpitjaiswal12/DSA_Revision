#include<iostream>
using namespace std;

//parameterized way
int sum(int i,int  n){
    if(n<0) return i;
    i=i+n;
    n--;
    sum(i,n);
}

// functional way
int sum1(int n){
    if(n<0){
        return 0;
    }
    
    return n+sum1(n-1);
}

int main(){
    cout<<sum1(10);
    
    
    return 0;
}