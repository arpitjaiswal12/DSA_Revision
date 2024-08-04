#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    // Not found then see circular way that next greater elelemt exist or not;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    stack<int> st;
    vector<int> ans(n);
    for (int i = 2 * n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i % n])
        {
            st.pop();
        }
        if (i < n)
        {
            ans[i] = st.empty() ? -1 : st.top();
        }
        st.push(arr[i%n]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}