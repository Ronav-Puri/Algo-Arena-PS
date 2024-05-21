//This code gave a wrong answer in one of the test cases on CSES (461390), but I cross-checked the number of divisors of 461390 and it is 32 (my output) and not 16 (CSES output).
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
    
    while(n--){
       int x;
       cin >> x;
 
       int count=2;
       for(int i=2; i*i<=x; i++){
            if((x%i == 0) && (i*i!=x)) count+=2;
            else if(!(x%i) && i*i==x) count++;
        }
 
        cout << count << "\n";
    }
 
    return 0; 
}
