#include<bits/stdc++.h>

using namespace std;


int main(){

	ios_base::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;

	vector<int> alunos(n,0); vector<int> cont(3,0);
	for(int i=0; i<n; i++){
		int a;
		cin >> a;
		alunos[i] = a;
		cont[a - 1]++;
	}

	int qtd_min;
	
	qtd_min = min(cont[0], cont[1]);
	qtd_min = min(cont[2], qtd_min);

	cout << qtd_min << endl;

	int um=0, dois=0, tres=0;

	while(qtd_min){
		while(alunos[um] != 1 && um <= n) um++;
		while(alunos[dois] != 2 && dois <= n) dois++;
		while(alunos[tres] != 3 && tres <= n) tres++;
		

		if(alunos[um]==1 && alunos[dois]==2 && alunos[tres] == 3){
			cout << um+1 << " " << dois+1 << " " << tres+1 << endl;
			um++; dois++; tres++;
		}
		qtd_min--;
	}

}
