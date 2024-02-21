#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

int static dp[101][101];

int LCS(string s1, string s2, int m, int n)
{
    if (n == 0 || m == 0)
        return 0;

    if (dp[m][n] != -1)
        return dp[m][n];

    if (s1[m - 1] == s2[n - 1])
    {
        return dp[m][m] = 1 + LCS(s1, s2, m - 1, n - 1);
    }
    return dp[m][n] = max(LCS(s1, s2, m - 1, n), LCS(s1, s2, m, n - 1));
}



int main()
{

    cout<<"Enter the two strings ";
    string s1,s2;
    cin>>s1>>s2;
    
    memset(dp,-1,sizeof dp);

    int ans=LCS(s1,s2,s1.length(),s2.length());

    cout<<"The length of longest subsequence is "<<ans<<endl;

    // Minimum no. of insertion and deletion to convert string s1 to s2;

    cout<<"Minimum no. of insertion "<<s2.length() - ans<<endl;
    cout<<"Minimum no. of deletion "<<s1.length() - ans;




    return 0;
}