#include<bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        int s, k, m; cin >> s >> k >> m;
        if(m%k > s){ // ele vai virar a ampulheta antes
            cout << 0 << endl;
        }
        else if(s<k){ // ele vai virar no último instante
            cout << m%k << endl;
        }
        else if(s==k){ // ele vai virar no tempo exato
            if(s+k > m){ // verifica que ao virar, vai dar tempo de sair para ir ao mercado
                cout << s+k - m << endl;
            }
            else{ // vai virar no último instante
                cout << s << endl;
            }
            
        }
        else if(s>k){ // o tempo da ampulheta é maior, vai aproveitar a areia de baixo
            // ele chega no último instante e vira, e o que vai cair vai ser a parte de baixo (k)
            if(m>k){
                cout << k-(m-k) << endl;
            }
            else{
                cout << k << endl;
            }
        }
    }


    return 0;
}