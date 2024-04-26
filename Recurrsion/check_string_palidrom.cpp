#include<iostream>
using namespace std;
bool palidrom(string s,int i){
    if(i>=s.size()){
        return true;
    }
    if(s[i]!=s[s.size()-i-1]){
        return false;
    }
    return palidrom(s,i+1);
}
int main(){
    string st="MADAMsirma";
    cout<<palidrom(st,0);
    
    
    return 0;
}