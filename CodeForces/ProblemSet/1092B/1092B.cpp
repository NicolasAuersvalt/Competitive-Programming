#include<bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
const int maximo = 102;

int main(){
    
    int n; cin >> n; n;
    vi skills, count(maximo, 0);
    for(int i=0; i<n; i++){
        int a; cin >> a;
        count[a]++;
    }
    for(int i=0; i<maximo; i++){
        if(count[i]%2==1){
            skills.push_back(i);
        }
    }
    sort(skills.begin(), skills.end());
    int total=0;
    for(int i=1; i<skills.size(); i+=2){
        int fir = skills[i-1], sec = skills[i];
        total += sec-fir;
    }
    cout << total << endl;
}