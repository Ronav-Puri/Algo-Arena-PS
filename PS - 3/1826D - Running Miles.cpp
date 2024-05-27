#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        vector<int> m1(n);
        for (int i = 0; i < n; i++) m1[i] = v[i] + i;

        vector<int> m2(n);
        for (int i = 0; i < n; i++) m2[i] = v[i] - i;

        for (int i = 1; i < n; ++i) m1[i] = max(m1[i], m1[i - 1]);
        for (int i = n - 2; i >= 0; --i) m2[i] = max(m2[i], m2[i + 1]);

        int ans = 0;
        for (int m = 1; m < n - 1; ++m) ans = max(ans, v[m] + m1[m - 1] + m2[m + 1]);

        cout << ans << "\n";
    }

    return 0;
}
