#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> row;
    vector<int> col;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                row.push_back(i);
                col.push_back(j);
            }
        }
    }

    for (int i = 0; i < row.size(); i++)
    {
        int r = row[i];
        for (int j = 0; j < n; j++)
        {
            matrix[r][j] = 0;
        }
    }

    for (int i = 0; i < col.size(); i++)
    {
        int c = col[i];
        for (int j = 0; j < m; j++)
        {
            matrix[j][c] = 0;
        }
    }
}

int main()
{
    // cout<<"world"
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    setZeroes(matrix);
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}