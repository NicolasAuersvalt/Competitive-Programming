#include<bits/stdc++.h>

using namespace std;


typedef vector<vector<int>> vi;

int main(){

	int n, k, a;
	cin >> n >> k;
	vi A(n, vector<int>(n,0));
	queue<int> fila;
	fila.push(1);
	cout << "antes" << endl;
	while(!fila.empty())
		a = fila.back();
		fila.pop();
		for(int i=0; i<n; i++){
			cout << i << endl;
			if(!A[a][i] && a != i){
				A[a][i]=1;	
				cout << a << " " << i << endl;
				fila.push(i);
				break;
			}
		}



	return 0;
}
