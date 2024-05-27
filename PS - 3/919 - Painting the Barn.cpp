#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("paintbarn.in", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin >> n >> k;

    vector< vector<int> > arr(1000, vector<int> (1000,0));
    int area=0;

    while (n--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for(int i=x1; i<x2; i++){
            for(int j=y1; j<y2; j++){
                arr[i][j]++;
            }
        }
    }
    

    for(int i=0; i<1000; i++){
        for(int j=0; j<1000; j++){
            if(arr[i][j]==k) area++;
        }
    }

    //freopen("paintbarn.out", "w", stdout);
    cout << area;

    return 0;
}
