#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    while(n--){

        int t; cin >> t;
        int stateE=0, stateO=0;
        bool possible = true;
        for(int i=1; i<=t; i++){
            int b; cin >> b;
            if(i%2==0){ // even
                if(b%2==0){ // even
                    if(stateE==1){
                        possible = false;
                    }
                    stateE=2;
                }
                else{ // odd
                    if(stateE==2){
                        possible = false;
                    }
                    stateE=1;
                }
            }
            else{ // odd
                if(b%2==0){ // even
                    if(stateO==1){
                        possible = false;
                    }
                    stateO=2;
                }
                else{ // odd
                    if(stateO==2){ 
                        possible = false;
                    }
                    stateO=1;
                }
            }
        }
        if(possible){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        

        // odd and even

    }
    return 0;
}