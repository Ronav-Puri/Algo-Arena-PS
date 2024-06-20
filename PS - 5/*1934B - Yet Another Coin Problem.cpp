#include<bits/stdc++.h>
 
using namespace std;
 
int solve(int n){
    int ans=0;
    for(int i=15, j=5; n!=0 || i>0; i-=j, j--){
        ans+=n/i;
        n%=i;
    }

    return ans;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        if(n<20) cout << solve(n) << '\n';
        else cout << min(solve(n), solve(n-20) + 2) << '\n';
    }

    return 0;
}
        
