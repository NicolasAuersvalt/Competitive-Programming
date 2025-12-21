#include<bits/stdc++.h>

using namespace std;

int main(){

    int n = 0;
    cin >> n;
    set<int> disjointSet;
    for(int i=1; i<=n; i++){
        // {manager, position}
        int a;
        cin >> a;
	if(a!=1) 
	    disjointSet.insert(a);
    }
    cout << disjointSet.size()+1 << endl;    

    return 0;

}
