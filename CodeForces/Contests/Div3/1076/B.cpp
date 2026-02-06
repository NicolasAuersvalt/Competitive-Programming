#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
int main(){

    int t;
    cin >> t;
    while(t--){


        int n; cin >> n;
        int l=0, r=0;
        vi vet(n,0);
        bool inv=false;
        int max = 0;
        for(int i=0; i<n; i++){
            //cout << l << " ad " << r << endl;;
            cin >> vet[i];
            if(i>0){
                if(!inv){
                    if(vet[i]<vet[i-1]){
                        //cout << i << endl;
                        l = i;
                        r=l-1;
                        inv = true;
                    }   
                }
            }
            if(inv){
                if(vet[i]>max){
                    max = vet[i];
                    r = i;
                }
            }
        }
        int i=0, j=r;
        for(int i=0; i<vet.size(); i++){
            if(i<l){
                cout << vet[i] << " ";
            }
            else{
                i=r;
                while(i>l){
                    cout << vet[i] << " ";
                    i--;
                }
                i=r;
                while(i<vet.size()){
                    cout << vet[i] << " ";
                    i++;
                }
            }
        }
        cout << endl;
        //cout << l << " " << r;
    }

    return 0;
}