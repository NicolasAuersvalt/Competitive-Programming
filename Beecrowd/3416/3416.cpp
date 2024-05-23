#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 0, l = 0, d = 0; // n = qtd alunos; l = qtd café; d = qtd militros que cada aluno bebe
    double qtd=0;
    cin >> n >> l >> d;

    qtd = (n * d) / 1000; // qtd, em litros, do total de café necessário
    // qtd min = n * d/1000
    if(qtd>(double)l){ // mais do que pode produzir
        cout<< (qtd / l)+1 << endl;
    }
    else{ // tem café suficiente

        cout << l <<  endl;
    }

    return 0;
}

