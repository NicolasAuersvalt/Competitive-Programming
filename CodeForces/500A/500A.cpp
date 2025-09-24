#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;


int main(){

    int n, t;
    cin >> n >> t;
    vi cells(n+1,0);
    
    for(int i=1; i<n; i++)
    {
        cin >> cells[i];
    }

    for(int i=1; i<=n; )
    {
        //cout << i << " and " << t << endl;
        if(i>=n && i!=t){
            break;
        }
        if(i==t){
            cout << "YES" << endl;
            return 0;
        }
        
        i+=cells[i];
    }

    cout << "NO" << endl;

    return 0;
}