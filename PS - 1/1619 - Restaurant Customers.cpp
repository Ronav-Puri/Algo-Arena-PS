#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    map<int,int> M;
    for(int i=0; i<n*2; i++){
        int tmp;
        cin >> tmp;
        if(i%2==0) M[tmp] = 1;
        else M[tmp] = -1;
    }
 
    int ans=0, curr=0;
    for(auto i : M){
        curr += i.second;
        ans = max(ans,curr);
    }
 
    cout << ans;
 
    return 0;
}
