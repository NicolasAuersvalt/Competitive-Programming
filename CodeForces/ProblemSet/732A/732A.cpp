#include<bits/stdc++.h>

using namespace std;

int main(){


        int k, r; cin >> k >> r;
        int i=1;
        while(true){
            int res1 = k*i;
            int res2 = k*i - r;
            //cout << "Res1 = " << res1 << " and Res2 = " << res2 << endl;
            if(res1%10 == 0 || res2%10 == 0){
                break;
            }
            i++;
        }
        cout << i << endl;

    return 0;
}