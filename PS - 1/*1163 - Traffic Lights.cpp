#include <bits/stdc++.h>
 
using namespace std;
 
int max_difference(vector<int> v){
    vector<int> diff(v.size(),0);
    int max_diff=0;
 
    for(int i=1; i<v.size(); i++){
        diff[i] = v[i] - v[i-1];
        max_diff = max(max_diff, diff[i]);
    }
 
    return max_diff;
}
 
 
int main(){
    int n,x;
    cin >> n >> x;
 
    vector<int> v;
    v.reserve(n);
    v.push_back(0);
 
    vector< pair<int,int> > test(x);
    for(int i=0; i<x; i++){
        cin >> test[i].first;
        test[i].second = i;
    }
 
    sort(test.begin(), test.end());
 
    vector<int> ans(x);
 
    for(int i=0; i<x; i++){
        v.push_back(test[i].first);
        v.push_back(n);
 
        ans[test[i].second] = max_difference(v);
        v.pop_back();
    }
 
    for(auto i : ans) cout << i << " ";
    
 
    return 0;
}
