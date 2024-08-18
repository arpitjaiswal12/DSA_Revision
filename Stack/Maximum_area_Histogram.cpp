#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. of histograms ";
    cin >> n;
    cout << "heights of histograms ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    stack<int> st1, st2;

    vector<int> pse(n), nse(n);

    // calculate previous smaller element

    for (int i = 0; i < n; i++)
    {
        while (!st1.empty() && arr[st1.top()] >= arr[i])
        {
            st1.pop();
        }
        if (st1.empty())
            pse[i] = -1;
        else
        {
            pse[i] = st1.top();
        }

        st1.push(i);
    }
    // calculate next smaller element

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st2.empty() && arr[st2.top()] >= arr[i])
        {
            st2.pop();
        }
        if (st2.empty())
            nse[i] = n;
        else
        {
            nse[i] = st2.top();
        }

        st2.push(i);
    }

    int area_max = 0;
    for (int i = 0; i < n; i++)
    {
        int left = pse[i];
        int right = nse[i];

        area_max = max(area_max, (right - left - 1) * arr[i]);
    }

    cout<<"The largest area is "<<area_max;

    return 0;
}