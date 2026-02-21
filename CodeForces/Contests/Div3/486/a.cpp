#include<bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
typedef queue<int> qi;

int main(){
    int n, k;
    cin >> n >> k;

    vi vet(n, 0);
    vi counter(105, 0);
    qi order;
    
    for(int i=0; i<n; i++){
        cin >> vet[i];
        if(!counter[vet[i]]){ // achou valor unico
            if(k){
                counter[vet[i]]++;
                order.push(i+1);
                k--;
            }
        }
    }
    if(k){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        while(!order.empty()){
            cout << order.front() << " ";
            order.pop();
        }
    }
    

    return 0;
}