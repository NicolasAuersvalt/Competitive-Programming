#include<bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        char b; cin >> b;
        string a = "codeforces";
        size_t pos = a.find(b); 
        if (pos != string :: npos) cout << "YES" << endl;
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}