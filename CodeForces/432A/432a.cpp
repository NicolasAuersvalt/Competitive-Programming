#include<bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0);

	int n, k;
	cin >> n >> k;

	vector<int> competidores(n, 0);
	
	for(int i=0; i<n; i++){
		int a;
		cin >> a;
		competidores[i] = a+k;
	}

	sort(competidores.begin(), competidores.end());

	int qtd =0;

	for(int i=0; i+3<=n; i+=3){
		if(competidores[i] > 5 || competidores[i+1] > 5 || competidores[i+2] >5);
		
		else
			qtd++;

	}

	cout << qtd << endl;

	return 0;
}
