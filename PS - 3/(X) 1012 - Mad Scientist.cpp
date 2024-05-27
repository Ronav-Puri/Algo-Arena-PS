#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("breedflip.in", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string a;
    cin >> a;
    string b;
    cin >> b;

    vector<int> change(n);
    for(int i=0; i<n; i++) if(a[i]!=b[i]) change[i]++;

    int ans=0;
    if(change[0]==1) ans++;
    for(int i=1; i<n-1; i++) if(change[i]==0 && change[i+1]==1) ans++;

    //freopen("breedflip.out", "w", stdout);
    cout << ans;

    return 0; 
}
