#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {

        ll a, b, res;
        cin >> a >> b;

        if(a > b) swap(a, b);

        if(a == b) {
            res = 0;
        }
      
        ll sub = 0,sum = 0,div = 0,mod = 0;
      
        sub = b - a;
      
        div = sub / 10;
      
        mod = sub % 10;
      
        sum = div;
      
        if(mod > 0){
            sum++;
        }
      
        cout << sum << endl;
    }
    return 0;
}
