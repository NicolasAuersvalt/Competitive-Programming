#include<bits/stdc++.h>

const int size = 40005;

using namespace std;

struct node{
	int u;
	int v;
	int size;
};

node grafo[size];

int kruskal(){
	int sum=0;
	int e, f;
	for(int i=0; i<size; i++){
		
		e = grafo[i].u;
		f = grafo[i].v;

		if(e!=f){
			e = f;
			sum+=grafo[i].size;
		}
	}
	return sum;
}

int main(){

	int m, n;

	// Inicializar vetores


	for(int i=0; i<n; i++){

		int a, b, c;
		cin >> a >> b >> c;
		grafo[i].u = a;
		grafo[i].v = b;
		grafo[i].size = c;

	}

	sort(grafo.begin(), grafo.end());

	cout <<  kruskal() << endl;

}