#include<bits/stdc++.h>

using namespace std;

void bubble(vector<string> &vet){
    for(int i=0; i<vet.size(); i++){
        for(int j=1; j<vet.size(); j++){
            if(vet[j].size()<vet[j-1].size()){
                swap(vet[j], vet[j-1]);
            }

        }

    }
}

bool order(vector<string> &vet){
    for(int i=0; i<vet.size(); i++){
        string a = vet[i];
        for(int j=i+1; j<vet.size(); j++){
            string b = vet[j];
            if(a.size()==b.size()){
                // precisam ser iguais
                if(a != b){
                    return false;
                }
            }
            else{
                size_t pos = b.find(a);   
                if (pos == string::npos){
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){

    int n; cin >> n;
    vector<string> vs;
    for(int i=0; i<n; i++){
        string a; cin >> a;
        vs.push_back(a);
    }    
    bubble(vs);

    if(order(vs)){
        cout << "YES" << endl;
        for(int i=0; i<vs.size(); i++){
                cout << vs[i] << endl;
            }
    }
    else{
        cout << "NO" << endl;
    }

    

    return 0;
}