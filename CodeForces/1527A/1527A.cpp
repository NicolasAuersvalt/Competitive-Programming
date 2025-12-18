#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int n; cin >> n;
        cout << fixed << int(pow(2, floor(log2(n)))-1) << endl;
    }

    return 0;
}