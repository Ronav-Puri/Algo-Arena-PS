#include <bits/stdc++.h>
 
using namespace std;
 
vector<int> p(vector<int> &v, int n){
    vector<int> sum(n+1,0);
    for(auto i = 1; i<n+1; i++) sum[i] = sum[i-1] + v[i];
    for(auto i = 1; i<n+1; i++) sum[i] -= i;

    return sum;
}

int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v(n+1,0);
        long long ans=0;
        for(int i=1; i<=n; i++) v[i] = s[i-1] - 48;

        vector<int> prefix = p(v,n);
        set<int> uni(prefix.begin()+1, prefix.end());
        multiset<int> count(prefix.begin()+1, prefix.end());
        for(auto i : uni){
            long long add = count.count(i);
            if(i==0) ans +=add;
            if(add > 1){
                ans += add * (add - 1)/2;
        }
        }
        cout << ans << "\n";
    }
 
    return 0;
}
