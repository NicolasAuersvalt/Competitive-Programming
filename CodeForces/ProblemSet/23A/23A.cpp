#include<bits/stdc++.h>

using namespace std;

int main(){

    string s; cin >> s;

    for(int len=s.size()-1; len>0; len--){
        for(int st=0; st<s.size()-1; st++){
            string sub = s.substr(st, len);
            if(s.find(sub, st+1) != string :: npos){
                cout << sub.size() << endl;
                return 0;
            }
        }
    }
    cout << 0 << endl;

    return 0;
}