#include<bits/stdc++.h>
#define mod (int)(1e9+7)
 
using namespace std;

int main(){
    int H,W;
    cin >> H >> W;
    vector< vector<char> > v(H, vector<char>(W));
    for (int i=0; i<H; i++){
        for(int j=0; j<W; j++) cin >> v[i][j];
    }

    vector< vector<int> > dp(H, vector<int>(W));
    dp[0][0] = 1;

    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            if(i+1<H && v[i+1][j]=='.'){
                dp[i+1][j] += dp[i][j];
                dp[i+1][j] %= mod;
            }

            if(j+1<W && v[i][j+1]=='.'){
                dp[i][j+1] += dp[i][j];
                dp[i][j+1] %= mod;
            }
        }
    }

    cout << dp[H-1][W-1];

    return 0;
}
