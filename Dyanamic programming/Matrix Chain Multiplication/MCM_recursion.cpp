#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int MCM_recursion(int arr[], int i, int j)
{
    if (i >= j)
        return 0;
    int min_cost = INT_MAX;
    for (int k = i; k < j; k++)
    {
        int tempAns = MCM_recursion(arr, i, k) + MCM_recursion(arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j];
        min_cost = min(min_cost, tempAns);
    }
    return min_cost;
}

int main()
{
    int n;
    cout << "Enter the no. of dimension and value";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Minimum cost is " << MCM_recursion(arr, 1, n - 1);
    return 0;
}