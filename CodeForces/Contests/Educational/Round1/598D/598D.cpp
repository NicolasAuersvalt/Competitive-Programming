#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define vvp vector<vector<pair<char, int>>>

vector<pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

void flood(vvp& mat, int i, int j, int qtd) {
    int n = mat.size();
    int m = mat[0].size();
    
    queue<pair<int, int>> q;
    q.push({i, j});
    
    mat[i][j].second = qtd; 

    while (!q.empty()) {
        pair<int, int> edge = q.front();
        q.pop();

        for (int v = 0; v < dir.size(); v++) {
            int ni = edge.first + dir[v].first;
            int nj = edge.second + dir[v].second;

            if(ni >= 0 && nj >= 0 && ni < n && nj < m){
                if (mat[ni][nj].first == '.' && mat[ni][nj].second == -1) {
                    mat[ni][nj].second = qtd; 
                    q.push({ni, nj});
                }
            }
        }
    }
}

int dfsCounter(int i, int j, vvp& mat) {
    int n = mat.size();
    int m = mat[0].size();

    if(i < 0 || j < 0 || i >= n || j >= m) return 0;

    if(mat[i][j].first != '.') {
        return 1;
    }
    
    if(mat[i][j].second != 0) {
        return 0;
    }

    mat[i][j].second = -1;

    int qtd = 0;
    for (int v = 0; v < dir.size(); v++) {
        int ni = i + dir[v].first;
        int nj = j + dir[v].second;
        
        if(ni >= 0 && nj >= 0 && ni < n && nj < m){
            qtd += dfsCounter(ni, nj, mat); 
        }
    }
    return qtd;
}   

void solve(){ 
    int n, m, k; 
    cin >> n >> m >> k;
    
    vvp mat(n, vector<pair<char, int>>(m, {'.', 0}));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j].first;
            mat[i][j].second = 0; 
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j].first == '.' && mat[i][j].second == 0){
                int qtd = dfsCounter(i, j, mat);
                
                flood(mat, i, j, qtd);
            }
        }
    }

    for(int i=0; i<k; i++){
        int a, b; 
        cin >> a >> b;
        cout << mat[a-1][b-1].second << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}