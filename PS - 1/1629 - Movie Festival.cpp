#include <bits/stdc++.h>
 
using namespace std;
 
bool cmp (pair<int,int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}
 
int main(){
    int n;
    cin >> n;
 
    vector< pair<int,int> > v;
    for(int i=0; i<n; i++){
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        v.push_back({tmp1, tmp2});
    }
 
    sort(v.begin(), v.end(), cmp);
 
    int ans=1;
    auto p1 = v.begin();
    auto p2 = p1+1;
    while(p2!=v.end()){
        if(p2->first >= p1->second){
            ans++;
            p1 = p2;
            p2++;
        }
 
        else p2++;
 
 
    }
 
    cout << ans;
 
    return 0;
}
