#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        if(n==2){
            if(s[0] < s[1]){
                cout << "YES\n2\n";
                cout << s[0] << ' ' << s[1] << '\n';
                continue;
            }

            else{
                cout << "NO\n";
                continue;
            }
        }        

        cout << "YES\n2\n";
        cout << s[0] << ' ';
        cout << s.substr(1);
        cout << '\n';
    }


    return 0;
}
