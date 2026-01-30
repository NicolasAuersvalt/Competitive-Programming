#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        int val; cin >> val;
        if(val<=1399){
            cout << "Division 4" << endl;
        }
        else if(val<=1599 && val >=1400){
             cout << "Division 3" << endl;
        }
        else if(val<=1599 && val >=1400){
             cout << "Division 3" << endl;
        }
        else if(val<=1899 && val >=1600){
             cout << "Division 2" << endl;
        }
        else if( val >=1900){
             cout << "Division 1" << endl;
        }
    }
    return 0;
}