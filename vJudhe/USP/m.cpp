#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pl;
#define INF 10e9

int main(){
    ll n; cin>> n;
    vll jianzhi(2*n);
    vector<pl> dp(2*n, {0,0});

    vector<pl> counter(n+1,{0,0});

    ll distance=INF;

    for(ll i=0; i<2*n; i++){
        cin >> jianzhi[i];
    }

    counter[jianzhi[0]].first++;
    counter[jianzhi[0]].second = 0;

    ll lastPair = 0;

    for(ll i=1; i<jianzhi.size(); i++){
        

        counter[jianzhi[i]].first++; // soma o contador daquele valor

        if(counter[jianzhi[i]].first==2){ // encontrou um par
            

            // Verifica se a primeira ocorrência dele ocorreu antes no nosso último par
            if(counter[jianzhi[i]].second<lastPair){
                
                // Se sim, verifica se a distância é menor
                if((i-counter[jianzhi[i]].second) < (dp[lastPair].second - dp[lastPair-1].second)){
                    // apenas atualiza a distância da dp
                    
                    dp[i].first=dp[i-1].first;
                    dp[i].second += dp[lastPair-1].second + i-counter[jianzhi[i]].second;
                    lastPair=i;
                }
                else{
                    dp[i].first=dp[i-1].first;
                    dp[i].second=dp[i-1].second;

                    counter[jianzhi[i]].second=i;
                }
            }
            // aconteceu depois, apenas soma a dp e salva a distância
            else{
                //cout << "quinto" << endl;
                dp[i].first = dp[i-1].first + 1;
                dp[i].second = i-counter[jianzhi[i]].second + dp[i-1].second;
                lastPair = i;
                
            }
        }
        else{
            // Apenas copia a dp anterior
            dp[i].first=dp[i-1].first;
            dp[i].second=dp[i-1].second;

            // atualiza a contagem de dígitos
            counter[jianzhi[i]].second=i;
        }
    }   

    cout << dp[dp.size()-1].first << " " << dp[dp.size()-1].second << endl;
    return 0;
}