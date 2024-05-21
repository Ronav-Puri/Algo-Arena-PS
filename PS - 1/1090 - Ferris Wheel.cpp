#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    sort(v.begin(), v.end());
    
    auto p1 = v.begin(), p2 = v.end()-1;
    int count=0;
    
    while(p1 < p2){
        int sum = *p1 + *p2;
        if (sum <= x){
            count ++;
            p1++;
            p2--;
        }
        else{
            count++;
            p2--;
        }
    }
    
    if(p1==p2) count++;
    
    cout << count;
    return 0;
}
