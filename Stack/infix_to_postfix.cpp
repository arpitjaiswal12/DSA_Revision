#include<iostream>
#include<stack>
using namespace std;

int prec(char a){
    if(a=='^'){
        return 3;
    }
    else if(a=='*' || a=='/'){
        return 2;
    }
    else{
        return 1;
    }
}

string infex_to_postfix(string s){
    stack <char> st;
    string res;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            res+=s[i];
        }
        else if(st.empty() || s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(st.top()!='('){
                res+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && prec(st.top())>prec(s[i])){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        
    }
    //something left or not in stack
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}

int main(){

    cout<<infex_to_postfix("(a-b/c)*(a/k-l)/(t-c)");
    
    
    return 0;
}