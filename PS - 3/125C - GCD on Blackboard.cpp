#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    vector<int> left(n+1,0);
    vector<int> right(n+1,0);

    int ans=1;

    for(int i=0; i<n; i++) left[i+1] = __gcd(left[i], v[i]);
    for(int i=n-1; i>=0; i--) right[i] = __gcd(right[i+1],v[i]);

    for(int i=0; i<n; i++) ans = max(ans, __gcd(left[i], right[i+1]));

    cout << ans;

    return 0; 
}
