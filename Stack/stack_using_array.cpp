#include<iostream>
using namespace std;
#define n 4
class stack{
    
    int* arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"stack is overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"stack is underflow"<<endl;
            return;
        }
        cout<<"pop element is "<<arr[top]<<endl;
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"no element exist"<<endl;
        }
        else{
            return arr[top];

        }


    }
    bool empty(){
        return top==-1;
    }
};


int main(){
    stack st;
    st.push(4);
    st.push(89);
    st.push(12);
    st.push(55);

    cout<<st.Top()<<endl;
    st.push(89);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.Top();
    cout<<st.empty();
    

    
    return 0;
}