#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    for(int i=0; i<n-1; i++){
        if(abs(v[i] - v[i+1]) <= m) continue;
        if(v[i] < v[i+1]) v[i] = v[i+1] - m;
        else if(v[i] > v[i+1]) v[i+1] = v[i] - m;
    }

    for(int i=n-1; i>0; i--){
        if(abs(v[i] - v[i-1]) <= m) continue;

        if(v[i-1] < v[i]) v[i-1] = v[i] - m;
        else if(v[i-1] > v[i]) v[i] = v[i-1] - m;
    }
    
    for(int i : v) cout << i << " ";
    return 0;
}
