class Solution {
public:
    bool equationsPossible(vector<string>& equations) {

        vector<int> p(26, -1);
        if(verifica(equations, p))
            return verifica(equations,p);
        return false;
}

    bool verifica(vector<string>& equations, vector<int>& p){
        for(int i=0; i<equations.size(); i++){
            int a = equations[i][0] - 'a', b = equations[i][3] - 'a';

            if(equations[i][1] == '='){ // ==
                if(find(a, p) != find(b,p))
                   unionV(a, b, p);
            }
            else{ // !=
                if(find(a, p) == find(b,p)){
                    return false;
                }
            }
        }
        return true;
    }

    int find(int v, vector<int>& vet) {
        if (vet[v] == -1) 
            return v;
        return vet[v] = find(vet[v], vet);
    }

    void unionV(int a, int b, vector<int>& vet){
        int c = find(a, vet), d = find(b, vet);
        if(c!=d){
            if(c == -1){
                vet[c] = d;
            }
            else if(d == -1){
                vet[d] = c;
            }
            else{
                vet[c] = d;
            }
            
        }
    }
};
