#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{
    // using stack
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<int> st;
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i]=-1;
            cout<<-1<<" ";
        }
        else{
            ans[i]=st.top();
            cout<<st.top()<<" ";
        }
        st.push(arr[i]);
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}