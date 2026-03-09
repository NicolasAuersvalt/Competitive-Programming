#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    int res = 0;
    int max = 0;
    while(t--){
        int a, b; cin >> a >> b;
        res -= a;
        res+=b;
        if(res>max){
            max = res;
        }
    }
    cout << max << endl;
}