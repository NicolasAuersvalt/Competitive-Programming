#include<bits/stdc++.h>

using namespace std;


int main(){

	int t;
	cin >> t;

	while (t--){

		int p; // partida
		cin >> p;

		int v, a;
		int soma=0;


		
		cin >> v >> a;		
		vector<vector<int>> adj(49);

		for(int i=0; i<a; i++){
			int c, d;
			cin >> c >> d;

			// bidirecional
			adj[c].push_back(d);
			adj[d].push_back(c);


		}

		vector<bool> visitado(49,false);

		queue<int> fila;

		fila.push(p); // Partida
		int ultimo;

		while(!fila.empty()){

			int k = fila.front();
			fila.pop();
			if(!visitado[k]){
					
				soma++;

				visitado[k] = true;

				for(auto it : adj[k]){

					if(!visitado[it]){
						//cout << "Visitando " << k << " - " << it << endl;
						fila.push(it);
						ultimo = it;
					}

			}

		}
		}
		/*
		// Fazendo o inverso, ate a partida
		
		fila.push(ultimo);

		bool achou = false;

		while(fila.front()!=p && !achou){

			int k = fila.front();
			fila.pop();

			if(visitado[k]){
					
				soma++;

				visitado[k] = false;

				for(auto it : adj[k]){

					//cout << "Voltando " << k << " - " << it << endl;

					if(it == p){
						//cout << "Achou" << endl;
						achou = true;
						break;
					}
					if(visitado[it]){
						fila.push(it);
					}

			}

			}
		}
		*/

		cout << 2*(soma-1) << endl;

	}


}
