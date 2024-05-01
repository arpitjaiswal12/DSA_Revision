#include<iostream>
using namespace std;
#define n 5
struct stack{
    int arr[n];
    int top=-1;
    void push(int x){
        if(top==n-1){
            cout<<"overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void reverse(){
        while(top>-1){
            cout<<arr[top]<<" ";
            top--;
        }
    }

};


int main(){
    stack st;
    st.push(10);
    st.push(12);
    st.push(13);
    st.reverse();
    
    
    return 0;
}