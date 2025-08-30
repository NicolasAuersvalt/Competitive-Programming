#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
	if(!b) return a;
	return gcd(b,a%b);
}

int main() {
    int n;
    cin >> n; 
    ll ans=1;
    for(ll i=n+1; i<=2*n; i++){
	ans = ans * i / gcd(ans, i);
    }
    cout << ans<< endl;
    return 0;
}

