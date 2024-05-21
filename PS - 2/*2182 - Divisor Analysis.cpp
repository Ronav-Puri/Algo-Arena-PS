#include <bits/stdc++.h>
#define m (long long)(1e9 + 7)
 
using namespace std;
 
 
 
int main(){
    int n;
    cin >> n;
    
    map <int, int> M;
 
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        cin >> M[tmp];
    }
 
    long long a = 1;
    for(auto i=M.begin(); i!=M.end(); i++) a = (a%m * ((i->second)+1)%m) % m;
 
    long long b = 1;
    for(auto i=M.begin(); i!=M.end(); i++) b = (b%m * (((long long)pow(i->first, i->second + 1))%m - 1)/(i->first - 1)) % m;
 
    long long c = 1;
    for(auto i=M.begin(); i!=M.end(); i++) c *= (long long)pow(i->first, i->second)%m;
    c = (long long)pow(c,a/2) % m;
 
    cout << a%m << " " << b%m << " " << c%m;
 
    return 0;
}
