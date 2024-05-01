#include<iostream>
#include<stack>
using namespace std;

/* to convert the expression from infix to prefix simply reverse the string 
and make '(' to ')' or vice versa...
then apply same logic as of postfix !!!*/

string reverse(string s){
    string rev;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='('){
            rev+=')';
        }
        else if(s[i]==')'){
            rev+='(';
        }
        else{
            rev+=s[i];
        }
    }
    return rev;
}

int prece(char a){
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

string infix_to_prefix(string ss){
    string pre;
    stack <char> st;
    for(int i=0;i<ss.length();i++){
        if(ss[i]>='a' && ss[i]<='z'){
            pre+=ss[i];
        }
        else if(st.empty() || ss[i]=='('){
            st.push(ss[i]);
        }
        else if(ss[i]==')'){
            while(st.top()!='('){
                pre+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && prece(st.top())>prece(ss[i])){
                pre+=st.top();
                st.pop();
            }
            st.push(ss[i]);
        }
    }
    while(!st.empty()){
        pre+=st.top();
        st.pop();
    }
    return pre;

}

int main(){
    string s=reverse("(a-b/c)*(a/k-l)");
    cout<<s<<endl;
    string p=infix_to_prefix(s);
    cout<<reverse(p);
    
    
    return 0;
}