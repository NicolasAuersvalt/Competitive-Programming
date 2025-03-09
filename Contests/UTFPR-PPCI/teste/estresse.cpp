#include <bits/stdc++.h>

using namespace std;

int main() {

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	string frase, palavra;
	getline(cin, frase);
	getline(cin, palavra);

	int qtd = 0;
	int fraseSize = frase.size();
	int palavraSize = palavra.size();

	int metade = (fraseSize - palavraSize) / 2;

	bool impar = (fraseSize % 2 != 0);

	for (int i = 0; i <= metade; i++) {
		int j = 0;	
		int i2;
		int fraseFinal = fraseSize - i2 - 1;

		if (impar)  
			i2 = metade + i + 1; 
		else
			i2 = metade + i;


		if (frase[i + j] == palavra[j]) {
			while (j < palavraSize && frase[i + j] == palavra[j])
				j++;

			if (j == palavraSize)
				qtd++;
		}
		else if (frase[i + j] == palavra[palavraSize - 1 - j]) {
			while (j < palavraSize && frase[i + j] == palavra[palavraSize - 1 - j])
				j++;

			if (j == palavraSize)
				qtd++;
		}
 
		else if (frase[fraseFinal + j] == palavra[j]) {
			while (j < palavraSize && frase[fraseFinal + j] == palavra[j])
				j++;

			if (j == palavraSize)
				qtd++;
		}

		else if (frase[fraseFinal + j] == palavra[palavraSize - 1 - j]) {
			while (j < palavraSize && frase[fraseFinal + j] == palavra[palavraSize - 1 - j])
				j++;

			if (j == palavraSize)
				qtd++;
		}
	}

	cout << qtd << endl;
	return 0;
}
