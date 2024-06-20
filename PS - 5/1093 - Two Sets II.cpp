#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int sum = (n*(n+1))/2;
    if(sum%2){
        cout << 0;
        return 0;
    }

    sum/=2;

    vector< vector<int> > dp(n+1, vector<int>(sum+1,0));
    dp[1][1] = 1;
    for(int i=2; i<=n; i++){
        for(int j=0; j<=sum; j++){
            dp[i][j] = (j>i ? dp[i-1][j] + dp[i-1][j-i] : dp[i-1][j]);
            dp[i][j] %= (int)(1e9 + 7);
        }
    }

    cout << dp[n][sum];

    return 0;
}
