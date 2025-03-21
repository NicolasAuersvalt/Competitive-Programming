#include<bits/stdc++.h>

using namespace std;

int main(){


	int c;
	cin >> c;
	cin.ignore();

	while(c--){

		string s1, s2, gran;
		int q;

		cin >> q;
		
		for(int i=0; i<q; i++){
			char a;
			cin >> a;
			s1.push_back(a);
		}
		for(int i=0; i<q; i++){
			char a;
			cin >> a;
			s2.push_back(a);
		}


		cout << "Tamanho " << s1.size() << " e " << s2.size() << endl;

		for(int i=0; i<q; i++){


			cout << s1[i];

			if((i*2+1)<s1.size()){
				cout /*<< "Esquerda " */<< s1[i*2+1]; // esquerda
			}

			if((i*2+2)<s2.size()){
				cout /*<< " Direita " */<< s1[i*2+2]; // direita
			}
		}

	}

	return 0;
}
