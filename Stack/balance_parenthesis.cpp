#include<iostream>
#include<stack>
using namespace std;

char value(char a){
    if(a=='}'){
       a='{';
       return a;
    }
    else if(a==')'){
        a='(';
        return a;
    }
    else{
        a='[';
        return a;
    }
}
/*bool correct(char a,char b){
    if(a==b){
        return 1;
    }
    return 0;
}*/

bool check_parenthesis(string s){
    stack <char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
            st.push(s[i]);
        }
        else if((value(s[i]))==st.top()){
            st.pop();
        }
        else{
            return false;
        }
    }
    return (st.empty());
}

int main(){
    //char b=value('}');
    //cout<<correct('{',b);
    cout<<check_parenthesis("({[({})]})");


    
    return 0;
}