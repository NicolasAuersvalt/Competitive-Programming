#include<bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        string a; cin >> a;
        transform(a.begin(), a.end(), a.begin(), ::tolower); 
        if(a=="yes"){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}