#include <iostream>
using namespace std;
int n, dp[10001], i, x[10001];
int main()
{
    cin >> n;
    for (i = 1; i <= n; i++) cin >> x[i];
    dp[1] = x[1];
    for (i = 2; i <= n; i++)
        dp[i] = max(dp[i - 1], dp[i - 2] + x[i]);
    cout << dp[n] << "\n";
    return 0;
}

