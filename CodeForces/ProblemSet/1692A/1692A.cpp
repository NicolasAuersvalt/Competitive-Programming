#include<bits/stdc++.h>

using namespace std;

int main(){


    int t; cin >> t;
    while(t--){
        int a, b, c, d, qtd=0;
        cin >> a >> b >> c >> d;
        if(b>a){
            qtd++;
        }
        if(c>a){
            qtd++;
        }
        if(d>a){
            qtd++;
        }
        cout << qtd << endl;
    }

    return 0;
}