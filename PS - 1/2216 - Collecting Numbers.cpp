#include <bits/stdc++.h>
#define ui unsigned int
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    map<int,bool> M;
 
    int count=1;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        M[tmp] = 1;
        if(M[tmp+1]) count++;
    }
 
    cout << count;
 
    return 0;
