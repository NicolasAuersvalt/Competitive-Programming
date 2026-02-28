#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    ll sum = 0;
    for(int i=1; i<223000; i+=2){
        sum+= 1LL * i*i;
    }

    cout << sum << endl;

    return 0;
}