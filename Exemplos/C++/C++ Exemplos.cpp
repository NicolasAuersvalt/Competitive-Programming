/*
Exemplos Vetores

#include<bits/stdc++.h>

*/

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
