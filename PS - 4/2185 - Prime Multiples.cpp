#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;
    vector<long long> primes(k);
    for (int i=0; i<k; i++) cin >> primes[i];

    long long ans=0;
    for (long long group=0; group < (1<<k); group++) {
        long long x = 1;
        bool odd = false;
        bool flag = true;

        for (int i = 0; i < k; i++) {
            if (group & (1<<i)) {
                if (x>n/primes[i]) {
                    flag=false;
                    break;
                }

                x *= primes[i];
                odd = (odd ? false : true);
            }
        }

        if(flag){
            if (odd) ans+=(n/x);
            else ans-=(n/x);
        }
    }

    cout << ans+n;

    return 0;
}
