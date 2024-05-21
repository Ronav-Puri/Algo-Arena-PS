#include <bits/stdc++.h>
#define duh (long long)(1e9 + 7)
 
using namespace std;
 
long long solve(long long a, long long b){
    long long ans = 1;
    while(b){
        if(b&1) ans = ans * a % duh;
        a = a * a % duh;
        b>>=1;
    }
    return ans;
}
 
int main(){
    int n;
    cin >> n;
    
    while(n--){
        long long a,b;
        cin >> a >> b;
        cout << solve(a,b) << "\n";
    }
 
    return 0; 
}
