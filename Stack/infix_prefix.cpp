#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
stack <char> st;
void prefixConvert(string s){
    
    char a='0';
    int mid=s.length()/2;
    char b;
    for(int i=s.length();i>=0;i--){
        if(i==mid){
            b=s[i];
        }
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]);
            if((a=='+')||(a=='/')||(a=='*')||(a=='-')){
                st.push(a);
                a='0';
            }
        }
        else{
            a=s[i];
        }
        
    }
    st.push(b);


}

int main(){
    string s="9+6*3+2/6";
    prefixConvert(s);
    for(int i=0;i<=s.length();i++){
        cout<<st.top()<<" ";
        st.pop();

    }
    

    
    return 0;
}