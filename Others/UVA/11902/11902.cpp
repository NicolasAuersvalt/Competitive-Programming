#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> mat(100, vector<int> (100,0));
typedef pair<int,int> ii;
typedef vector<int> vi;

vi dfs_num(100,0);

void dfs(int node, int p){
	dfs_num[node] = 1;
	for(int j=0; j < p; j++){
		if(mat[node][j] && !dfs_num[j]){
			dfs(j, p);
		}
	}
}

void print(int m){
	for(int i=0; i<m; i++){
		cout << "+-";
		for(int l=0; l<m-2; l++){
			cout << "----";
		}
		cout << "+" << endl;

		for(int j=0; j<m; j++){
			if(dfs_num[i] && dfs_num[j]){
				cout << "|Y|";
			}

			else{
				cout << "|N|";
			}

		}

		cout << endl;
	}
}


int main(){

	int t, n, a, b;
	cin >> t >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> mat[i][j];
		}
	}
	cin >> a >> b;

	dfs(0, n);
	print(n);
	return 0;
}
