#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    for(int i=0; i<8; i++){
        char n; cin >> n;
        if(i<4)
            a.push_back(n);
        else
            b.push_back(n);        
    }
    swap(a[2], a[3]); swap(b[2], b[3]); 
    size_t pa = a.find("X"), pb = b.find("X");
    a.erase(pa,1); b.erase(pb,1);
    a += a;
    if(a.find(b) != string :: npos)
        cout << "YES" << endl;
    else  cout << "NO" << endl;
    //cout << a << " and " << b << endl;
    return 0;
}