#include <bits/stdc++.h>
#define mod (long long)(1e9 + 7)
 
using namespace std;
 
long long solve(long long a, long long b, int m){
    long long ans = 1;
    while(b){
        if(b&1) ans = (ans%m * a%m) % m;
        a = (a%m * a%m) % m;
        b>>=1;
    }
    return ans;
}
 
int main(){
    int n;
    cin >> n;
    
    while(n--){
        long long a,b,c;
        cin >> a >> b >> c;
        long long mid = solve(b,c,mod-1);
        cout << solve(a,mid,mod) << "\n";
    }
 
    return 0; 
}
