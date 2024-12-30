#include<bits/stdc++.h>

using namespace std;

int dfs(vector<vector<int>>&adj, int val){
	
	return val;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	while(n--){
		int part;
		cin >> part;

		int v, a;
		cin >> v >> a;

		vector<vector<int>> adj (v);

		for(int i=0; i<a; i++){

			int j, k;
			cin >> j >> k;

			adj[j].push_back(k);
		}

		cout << dfs(adj, part) << endl;

	}

}
