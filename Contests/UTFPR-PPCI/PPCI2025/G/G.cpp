#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
int main() {

    ll n, k, a;
    cin >> n >> k >> a;
    vll num;
    for(int i=0; i<n; i++){
        ll y; cin >> y;
        num.push_back(y);
    }
    ll diff=a;
    sort(num.begin(), num.end());
    for(int i=k-1; i>=0; i--){
        diff-=num[i];
        if(diff<0){
            cout << "Nao e possivel" << endl;
            return 0;
        }
        //cout << "diff: "<< diff << " num =" << num[i] << endl;
    }
    cout << a-diff << endl;
    
    return 0;   
}
