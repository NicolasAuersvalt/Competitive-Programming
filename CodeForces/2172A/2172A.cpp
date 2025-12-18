#include<bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int g, c, l; cin>>g>>c>>l; if(max(max(g,c), max(c,l))-min(min(g,c), min(c,l))>=10) cout << "check again"<< endl;
    else cout << "final " << min(max(g,c), l);
    return 0;
}