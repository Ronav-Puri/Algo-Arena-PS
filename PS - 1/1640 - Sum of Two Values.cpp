#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,x;
    cin >> n >> x;
 
    vector < pair<int,int> > v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first;
        v[i].second = i+1;
    }
 
    sort(v.begin(), v.end());
 
    auto p1 = v.begin(), p2 = v.end()-1;
    while(p1<p2){
        int sum = p1->first + p2->first;
 
        if(sum==x){
            cout << p1->second << " " << p2->second;
            return 0;
        }
        else if(sum<x) p1++;
        else if(sum>x) p2--;
    }
 
    if(p1>=p2) cout << "IMPOSSIBLE";
    return 0;
}
