/*
Exemplos Vetores

#include<bits/stdc++.h>

*/
// ====/====/====/====/====/====/====/====/====/====/====/

// PRECISÃO

// 1º - Biblioteca para manipulação de fluxos

#include <iomanip>

// 2º

  float a;
  cin >> a;

// 3º

  cout  << fixed << setprecision(5) << a << endl

// fixed: Garante que o valor seja exibido em notação decimal fixa.

// setprecision(5): Define a precisão para 5 casas decimais.

// ====/====/====/====/====/====/====/====/====/====/====/
    
// Exemplo (Média Ponderada) 

  // Soma dos valores multiplicação do seu peso, dividido pela soma dos pesos

  long double a, b, c=2.0, d;
  cin >> a >> b;
  a *=3.5;
  b *=7.5;
  d = (a+b)/(3.5+7.5);

  cout << "MEDIA = " << fixed << setprecision(5) << d << endl;

// ====/====/====/====/====/====/====/====/====/====/====/



// Encontrando o maior valor entre dois números sem IF

maior1 = (a+b+abs(a-b))/2;



// ====/====/====/====/====/====/====/====/====/====/====/


while(getline(cin, vet)))





#include<vector>

vector<int> vector;

push_back(0); // adiciona na cauda o elemento 0;

pop_back(); // remove o elemento da cauda

// 1º
vector<int>::iterator it;

// 2º
it = vector.begin() // aponta para o início de vetor

// 3º
vector.insert (it, 5) // adiciona o elemento 5 no início do vetor

// 4º Inserir uma série de elementos

it = vector.end();
vector.insert(it, 5, 9) // adiciona 5 vezes o elemento 9 na cauda

// Eliminar do fim

it = vector.end()-1; //Antes de null
vector.erase(it);
