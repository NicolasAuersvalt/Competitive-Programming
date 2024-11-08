// Exemplos de ponteiros

// ====/====/====/====/====/====/====/====/====/====/====/

// Valor

int valor=0;
int* ponteiro = &valor;
*ponteiro = 10;

// ====/====/====/====/====/====/====/====/====/====/====/

// Passagem por referência

// ====/====/====/====/====/====/====/====/====/====/====/


// 1º Declara os valores

char** matriz = new char*[10];
int posicao = 10;

for(i=0; i<n; i++){
  matriz[i] = new char[2];
}


// 2º Chama a função específica passando o endereço

funcao(matriz, &posicao);



// 3º Recebe na função da seguinte forma

void funcao(char** teste, int* posicao){
  *posicao = *posicao + 1;
  teste[0][0] = 'A';
}