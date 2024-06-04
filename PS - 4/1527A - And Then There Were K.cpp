#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int x=1;
        while(x<=n)x <<= 1;
        x >>= 1;
        cout << x-1 << '\n';
    }
    return 0;
}
