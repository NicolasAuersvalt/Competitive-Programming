#include<bits/stdc++.h>

using namespace std;


int main(){

	int n;
	cin >> n;

	int i;
	vector<int> vet(n);
  
	for(i=0; i<n; i++){
		int x;
		cin >> x;
		vet[i] = x;
	}

	// Cria um ponteiro para o início do vetor
	int valMax=0;

	for(auto l = vet.begin(); l!=vet.end(); l++){
    if(*l>0){
  		int val=0;
  		for(auto r = l; r!=vet.end(); r++){
  			val+=*r;
  			if(val>valMax){
  				valMax = val;
  			}
  		}
    }
	}

	cout << valMax << endl;

	return 0;
}
