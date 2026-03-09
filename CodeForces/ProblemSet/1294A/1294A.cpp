#include<bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n<24){
            cout << "NO" << endl;
        }
        else{

            int a=0, b=0, c=0;
            for(int i=2; i<sqrt(n); i++){
                if(n%i==0){
                    if(a==0){
                        a = i;
                        n /= i;
                    }
                    else if(b==0){
                        b = i;
                        c = n/b;
                        break;
                    }
                }
            }
            if(min(min(a,b),min(b,c))!=0){
                cout << "YES" << endl;
                cout << a << " " << b << " " << c << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        
    }
    return 0;
}