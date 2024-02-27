#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;

int v[N], w[N];
int dp[N][N];

int solve(int n, int c)
{
    //初始化 刷第一行
    for (int j = 1; j <= n; j++)
    {
        dp[1][j] = j >= v[1] ? w[1] : 0;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            //第i个物品装得下吗？
            if (j >= v[i])
            {
                //装得下
                dp[i][j] = max(w[i] + dp[i - 1][j - v[i]], dp[i - 1][j]);
                //有必要装吗？
                //如果要装，我先装第i个物品，因此价值先+w[i]
                //然后我现在只能装i-1个物品，我的容量变为j-v[i]
                //因此问题转化为dp[i-1][j-v[i]]

                //如果不装，那么沿袭i-1个物品的情况dp[i-1][j]

                //到底有必要装吗？装了之后我的价值还不如不装的，那我为什么要装？
                //因此两种情况取max
            }
            else
            {
                //装不下
                dp[i][j] = dp[i - 1][j];
                //第i个物品都装不下，相当于没用，没这个东西
                //那只好沿袭前面的dp[i-1][j]
            }
        }
    }

    return dp[n][c];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c;
    //n个物品，容量为c
    cin >> n >> c;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i] >> w[i];
    }

    cout << solve(n, c);
}