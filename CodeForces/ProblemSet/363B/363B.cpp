#include<bits/stdc++.h>

using namespace std;

int main(){

	int n, k, minSum=0, minIndex =1; cin >> n >> k; 
	vector<int> vet(n,0);
	for(int i=0; i<n; i++)
		cin >> vet[i];
	// Soma inicial
	for(int i=0;i<k;i++)
		minSum+=vet[i];
	// Somas prosseguintes
	int sum = minSum;
	for(int i=k; i<n; i++)
	{	
		sum = sum - vet[i-k] + vet[i];
		if(sum<minSum){ minSum = sum; minIndex = i-k+2;}
	}
	//cout << "Soma = " << minSum << endl;
	//cout << "Indice["<< minIndex << "] = " << vet[minIndex-1] << endl;
	cout << minIndex << endl;
	return 0;
}
