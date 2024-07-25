#include<vector>

// ====/====/====/====/====/====/====/====/====/====/====/

// # .push_back()
// # .pop_back()
// # .size()

// ====/====/====/====/====/====/====/====/====/====/====/

// Declaração

vector<int> vector;

vector<bool> fita(tam, false);

// Declaração com elementos pré-definidos

vector<int> vector(5,2); // 5 casas com o valor 2 em cada uma

vector<int> vector(5,0); // 5 casas zerando elas

// ====/====/====/====/====/====/====/====/====/====/====/


// ====/====/====/====/====/====/====/====/====/====/====/
// # Tamanho indefinido e entrada em uma única linha
// ====/====/====/====/====/====/====/====/====/====/====/



// Nesse caso, deixa de armazenar quando entrar zero.




// Define o vetor de tamanho aleatório
vector<int> vet;
int i=0;

// Recebe os valores em uma única linha, sem teclar enter, e armazena no vetor
while(cin >> i){
  if(i==0){
    break;
  }
  vet.push_back(i);
}

// Ordena o vetor
sort(vet.begin(), vet.end());

// Imprime o último valor do vetor
cout << vet[vet.size()-1] << endl;



// ====/====/====/====/====/====/====/====/====/====/====/
// # Tamanho indefinido Percorrendo o vetor
// ====/====/====/====/====/====/====/====/====/====/====/

vector<int> vetor;

auto i; // Ponteiro para o início do vetor

for(i = vetor.begin(); i!=vetor.end(); i++){
  cout << *i << " ";
})


// ====/====/====/====/====/====/====/====/====/====/====/
// # Inverter vetor dado um outro
// ====/====/====/====/====/====/====/====/====/====/====/

vector<int> vet3(vet.rbegin(), vet.rend());