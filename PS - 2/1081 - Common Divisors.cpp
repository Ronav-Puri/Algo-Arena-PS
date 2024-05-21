#include <bits/stdc++.h>
#define N 1e6
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    vector<int> test(n);
    for(int i=0; i<n; i++) cin >> test[i];
 
 
    vector<int> v(N+1,0);
    for(int i=0; i<n; i++) v[test[i]]++;
 
    for(int index = N; index > 0; index--){
        int count=0;
        for(int i=index; i<=N; i+=index){
            count +=v[i];
            if(count > 1){
                cout << index;
                return 0;
            }
        }
    }
 
    return 0;
}
