#include<bits/stdc++.h>

using namespace std;

int main(){
    string a; cin >> a;
    string b; cin >> b;
    reverse(b.begin(), b.end());
    if(a.size()!=b.size()){
        cout << "NO" << endl;
        return 0;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i]!=b[i]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}