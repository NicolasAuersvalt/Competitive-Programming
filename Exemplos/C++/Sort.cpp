// C++

#include <algorithm>

====/====/====/====/====/====/====/====/====

// Vetor tamanho fixo




std::vector<int> vet(n);

for (int i = 0; i < n; ++i) {

  std::cin >> vet[i];
  
}

sort(vector.begin(), vector.end())

====/====/====/====/====/====/====/====/====

// Vetor tamanho variado

vector<int> vet;  // Vetor dinâmico


while (true) {
  cin >> valor;
  if (valor == -1) {
    break; 
  }
  vet.push_back(valor);  // Adiciona o valor ao vetor
}


sort(vet.begin(), vet.end());

====/====/====/====/====/====/====/====/====

// Fixo


size = int(input("Enter the size of the array: "))

arr = []

for i in range(size):

    arr.append(int(input()))
    
# Sort the array in ascending order
arr.sort() 

====/====/====/====/====/====/====/====/====

// Variado

arr = []

while True:
    element = input("Enter an element (or 'done' to finish): ")
    if element == 'done':
        break
    arr.append(int(element))

arr.sort() 

print("Sorted array:", arr)