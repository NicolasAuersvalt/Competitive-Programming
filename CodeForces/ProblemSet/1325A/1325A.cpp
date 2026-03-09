#include<bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        if(x==2){
            cout << "1 1" << endl; 
        }
        else{
            cout << 1 << " " << x-1 << endl;
        }
    }


    return 0;
}