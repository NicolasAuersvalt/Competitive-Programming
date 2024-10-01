#include<bits/stdc++.h>

using namespace std;

int* sieveE(int n, vector<int> &sieve){

	for(int x=2;x<=n;x++){
		if(sieve[x]) continue;
		for(int u=2*x; u<=n;u+=x){
			sieve[u]= x;
		}
	}
}


int main(){

	ios_base::sync_with_stdio(0); 
	cin.tie(0);

	int a;
	cin >> a;

	vector<int> vet(a);
	sieveE(a, vet);
	/*
	for(int i=0; i<vet.size(); i++){
		vet[i] = i;
	}
	*/
	for(int i=0; i<vet.size(); i++){
		cout << vet[i] << " ";

	}
	

	return 0;
}
