#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vl;

void solve(){
    int n; 
    cin >> n;
    
    ll sum = 0;
    vl impares; 
    
    for(int i = 0; i < n; i++){
        ll a; 
        cin >> a;
        if(a % 2 == 0) {
            sum += a; 
        } else {
            impares.push_back(a); 
        }
    }

    if(impares.empty()){
        cout << 0 << endl;
    } else {
        sort(impares.begin(), impares.end());
        int l=0, r=impares.size()-1;
        bool ligado = false;
        while(r>=l){   
            if(!ligado){ // não está ligado, pega o maior valor
                sum+=impares[r];
                r--;
                ligado = true;
            }
            else{
                l++; 
                ligado = false;
            }
        }
        cout << sum << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}