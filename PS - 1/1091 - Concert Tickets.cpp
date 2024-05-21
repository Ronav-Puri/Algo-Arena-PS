#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,m;
    cin >> n >> m;
 
    multiset<int> ticket;
    for(int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;
        ticket.insert(tmp);
    }
    vector<long long> price(m);
    for(int i=0; i<m; i++) cin >> price[i];
 
    for(auto x : price){
        if(ticket.empty()){
            cout << "-1\n";
            continue;
        }
 
        auto p = ticket.lower_bound(x);
        if(p ==ticket.end()) p--;
 
 
        if(*p <= x){
            cout << *p << "\n";
            ticket.erase(p);
            continue;
        }
 
        else if((*p > x) && (p != ticket.begin())){
            p--;
            cout << *p << "\n";
            ticket.erase(p);
            continue;
        }
 
        else cout << "-1\n"; 
    }
 
    return 0;
}
