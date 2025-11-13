#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> counter(30,0); //65 -> 90 A -> Z

    for(int j=0; j<3; j++){
        string s;
        getline(cin,s);

        if(j==2){
            for(int i=0; i<s.size(); i++){
                counter[s[i]-65]--;
            }
        }
        else{
            for(int i=0; i<s.size(); i++){
                counter[s[i]-65]++;
            }
        }
        
    }

    for(int i=0; i<counter.size(); i++){
        if(counter[i]!=0){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}