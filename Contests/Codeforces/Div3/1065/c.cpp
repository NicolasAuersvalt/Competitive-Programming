#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int score=0, lastA=0, lastM=0;

        vi vA(n,0),vB(n,0);
        for(int i=0; i<n; i++){
            cin >> vA[i];
        }
        for(int i=0; i<n; i++){
            cin >> vB[i];
        }

        for(int i=0; i<n; i++){
            if(vA[i]!=vB[i]){
                score++;
                if((i+1)%2==0){//mai
                    lastM = i;
                }
                else{
                    lastA=i;
                }
            } 
        }
        if(score%2!=0){ // par
            if(lastA<lastM){
                cout << "Mai" << endl;
            }
            else{
                cout << "Ajisai" << endl;
            }
        }
        else{
            cout << "Tie" << endl;
        }

    }

    return 0;
}