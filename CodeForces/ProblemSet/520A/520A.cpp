#include<bits/stdc++.h>

using namespace std;

vector<int> vet(26,0);

int main(){

    int t; cin >>t;
    string a; cin >> a;
    transform(a.begin(), a.end(), a.begin(), ::tolower); 
    for(int i=0; i<a.size(); i++){
        vet[a[i]-97]++;
    }
    for(int i=0; i<vet.size(); i++){
       if(!vet[i]){
        cout << "NO" << endl;
        return 0;
       }
    }
    cout << "YES" << endl;
    return 0;
}