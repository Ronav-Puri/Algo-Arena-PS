#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> v1(n), v2(m);
    for(int i=0; i<n; i++) cin >> v1[i];
    for(int i=0; i<m; i++) cin >> v2[i];
    
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    
    auto p1 = v1.begin(), p2 = v2.begin();
    int count=0;
    
    while((p1!=v1.end()) && (p2!=v2.end())){
        if (*p2 < *p1 - k) p2++;
        else if(*p2 > *p1 + k) p1++;
        else{
            count++;
            p1++;
            p2++;
        }
    }
    
    cout << count;
    return 0;
}
