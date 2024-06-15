#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    int MAX=0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        MAX = max(MAX, v[i]);
    }

    vector<long long> count(MAX+1);
    for(int i=0; i<n; i++) count[v[i]]++;

    vector<long long> dp(MAX+1);
    dp[1] = count[1];
    for(int i=2; i<=MAX; i++) dp[i] = max(dp[i-1], dp[i-2] + (long long)(i*count[i]));

    cout << *max_element(dp.begin(), dp.end());

    return 0;
}
