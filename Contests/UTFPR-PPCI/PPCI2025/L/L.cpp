#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    vector<vector<char>> montanha(n,vector<char>(n,'0'));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> montanha[i][j];
        }
    }
    pair<int, int> coord;
    coord.first = n; coord.second = n;
    bool primeiro = true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(montanha[i][j] == '#'){
                if(primeiro){
                    if(coord.first>i){
                        primeiro = false;
                        coord.first = i;
                        coord.second = j;  
                    }
                }
                else{
                    if(coord.first>=i) {
                        coord.first = i;
                        if(coord.second<j) coord.second = j;
                    }
                    
                }
            }
        }
    }
    cout << "(" << coord.first+1 << ", " << coord.second+1 << ")" << endl;
    return 0;
}
