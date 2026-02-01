#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

long long comb(long long n, long long k) {
    long long r = 1;
    for (long long i = 1; i <= k; i++) {
        r = r * (n - i + 1) / i;
    }
    return r;
}

long long comb_with_repetition(long long n, long long k) {
    return comb(n + k - 1, k-1);
}


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>> t;
    while(t--){
        int n; cin >> n;
        if(n%2!=0) cout << 0 << endl;
        else {
            cout << comb_with_repetition(n/4,2) << endl;
        }
    }

    return 0;
}