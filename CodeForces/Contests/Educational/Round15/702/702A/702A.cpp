#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    vll vet(n,0), diff(n,0);
    for(ll i=0; i<n; i++){
        cin >> vet[i];
        if(i>0){
            if(vet[i] - vet[i-1]>0){
                diff[i] = diff[i-1] + 1;
            }
            else{
                diff[i]=0;
            }
        }
    }
    ll max=0;
    for(ll i=0; i<n; i++){
        if(diff[i]>max) max = diff[i];
    }

    cout << max+1 << endl;
    return 0;
}