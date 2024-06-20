#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> price(n);
    for(int i = 0; i < n; i++) cin >> price[i];
    vector<int> page(n);
    for(int i = 0; i < n; i++) cin >> page[i];

    vector<int> dp(x+1);

    for(int i=0; i<n; i++) {
        for(int j=x; j>=price[i]; j--) {
            dp[j] = max(dp[j], dp[j - price[i]] + page[i]);
        }
    }

    cout << *max_element(dp.begin(), dp.end());
    
    return 0;
}
