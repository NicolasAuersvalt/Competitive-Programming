#include<bits/stdc++.h>

using namespace std;


float search(float n, float k){

    if(n==k){
        return 1.0;
    }

    if(n<k){return -1.0;}

    float left = search(floor(n/2), k);
    float right = search(ceil(n/2), k);
    if(max(left,right)!=-1.0){
        if(min(left,right)!=-1.0){
            return min(left, right)+1;
        }
        else{
            return max(left,right)+1;
        }
    }

    return -1.0;

}

int main(){

    int t; cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        int res = search(n, k);
        if(res!=-1){
            res--;
        }
        cout << res << endl;
    }


    return 0;
}