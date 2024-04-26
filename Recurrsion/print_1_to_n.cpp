#include<iostream>
using namespace std;
int ct=1;
void print(int n){
    if(ct==n+1 || ct>n)return ;
    cout<<ct++<<endl;
    print(n);
}
void print1(int n){
    if(n==0) return ;
    cout<<n--<<endl;
    print1(n);
}
void print_ptr(int i,int n){
    if(i>n){
        return;
    }
    cout<<i++<<endl;
    print_ptr(i,n);
}
int main(){
    // print1(5);
    //using parameter
    print_ptr(1,8);

    
    
    return 0;
}