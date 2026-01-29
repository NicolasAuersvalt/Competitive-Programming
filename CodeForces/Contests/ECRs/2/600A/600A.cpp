#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef pair<int, int> pii;

typedef vector<int> vi;
typedef vector<vector<int>> vvi;

typedef vector<vector<int>> graph;
typedef vector<vector<pair<int,int>>> wgraph; // (vizinho, peso)


const int INF = 1e9; // Infinito para Inteiros
const ll INFLL = 1e18; // Infinito para Long Long 
const ld EPS = 1e-9; // Tolerância para números de ponto flutuante
const ld PI = acos(-1.0L); // Valor de Pi com máxima precisão

#define DEBUG 0

void solve() {
	string a = "," , b;
	cin >> b;
    a+=b;
    string words="", numbers="";
	for(int i=0; i<a.size(); i++){
        string ne;
        if(i==a.size()-1 && a[i]==','){
            // empty
            words+=",";
            break;
        }

		if (a[i]== ';' || a[i]==','){ // tail

            bool number=true;
            
            int j;
            for(j=i+1; j<a.size() && (a[j]!=';' && a[j]!=','); j++){ // head

                //number verification  
                if(j == i+1 && a[j] == '0'){
                    // not a number
                    number = false;
                }
                else if(a[j]=='-' || a[j]=='.'){
                    number = false;
                }
                if((a[j]-48)<0 || (a[j]-57)>0){
                    number = false;
                }

                ne+=a[j];
            }
            if(j==i+1){
                number= false;
            }
            i=j-1;
            // j is in , or ; + 1 position
            if(number ||ne.size()==1 && ne[0]=='0'){
                numbers += ne;
                numbers += ",";
            }
            else{
                words += ne;
                words += ",";
            }
            
        }
        
	}
    
    if(!numbers.empty()){
        numbers.pop_back();
        cout << '"' << numbers << '"' << endl;
    }
    else{
        cout << '-' << endl;
    }
    if(!words.empty()){
        words.pop_back();
        cout << '"' << words << '"' << endl;
    }
    else{
        cout << '-' << endl;
    }
    
   
    
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #if DEBUG
    cerr << "Debug Ativado" << endl;
    #endif

    solve();

    return 0;
}
