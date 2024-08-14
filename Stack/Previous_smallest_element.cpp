#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    stack<int> st;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        if (!st.empty() && st.top() >= arr[i])
        {
            st.push(arr[i]);
        }
        else if (st.empty())
            v[i] = -1;
        else
        {
            v[i] = st.top();
        }
        st.push(arr[i]);
    }
    
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}