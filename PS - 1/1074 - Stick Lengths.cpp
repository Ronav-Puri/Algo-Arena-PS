#include <bits/stdc++.h>
#define ui unsigned int
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    multiset<ui> s;
 
    for(int i=0; i<n; i++){
        ui tmp;
        cin >> tmp;
        s.insert(tmp);
    }
 
    int median=0;
    auto ref = s.begin();
    for(int i=0; i<n/2; i++) ref++;
    if(s.size()%2) median = *ref;
    else{
        int a = *ref--;
        int b = *ref;
        median = a + (b-a)/2;
    }
 
    long long x=0; 
    for(auto p = s.begin(); p!=s.end(); p++){
        ui sum=0;
        if(*p < median) sum = median - *p;
        else if (*p > median) sum = *p - median;
        x+=sum;
    }
 
    cout << x;
 
    return 0;
}
