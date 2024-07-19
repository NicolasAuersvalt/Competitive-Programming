#include<bits/stdc++.h>

// ====/====/====/====/====/====/====/====/====/====/====/

// # .find()
// # .inser()
// # .erase()
// # .clear()
// # .size()
// # .empty()
// # .begin()
// # .end()

// ====/====/====/====/====/====/====/====/====/====/====/

// Map é usado para armazenar pares de chave e valor.

// Unordered_map é usado para armazenar pares de chave e valor, mas não garante a ordem de inserção dos elemento, ou seja, 
// a ordem não é 1 2 3 4 necessariamente, podendo ser
// 55, 22, 11


// ====/====/====/====/====/====/====/====/====/====/====/

// # Declaração map

map<int> map_int;
map<string, int> map_int = make_pair(10, "Olá");


// ====/====/====/====/====/====/====/====/====/====/====/

// # Declaração unordered_map

unordered_map<int, int> dict(n);


// ====/====/====/====/====/====/====/====/====/====/====/

// # Input 

unordered_map<int, int> dict(n);

for(i = 0; i < n; i++){
  int x;
  cin >> x;
  dict[x]++;
}

// Por exemplo, sendo unordered, se a entrada for
// 10, 20, 30, 10, teremos possivelmente

// [{30, 1}, {20, 1}, {10, 2}]]

// ====/====/====/====/====/====/====/====/====/====/====/

// Acessando elementos

// Deve-se utilizar ponteiro (auto par: dict)
// o qual percorre todos os *valores* do map, e não posições

// Devemos usar map.first e map.second

for(auto par: dict){
  if(par.second > freq){
    
    freq = par.second;
    valueFreq = par.first;
    
  }

  // Assim
  
  // [{30, 1}, {20, 1}, {10, 2}]]

  // Se par.first, o qual par é o ponteiro para a posição

  // par.first 
  // 30

  // par.second
  // 1
  

// ====/====/====/====/====/====/====/====/====/====/====/
