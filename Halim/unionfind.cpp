#include<bits/stdc++.h>


using namespace std;
typedef long long ll;
typedef vector<int> vi;

class UnionFind{

    private: vi p, rank;

    public:
        UnionFind(int N)
        {
            rank.assign(N,0);
            p.assign(N,0);
            for(int i=0; i<N; i++){
                p[i] = i;
            }
        };
        bool isSameSet(int i, int j){
            return findSet(i) == findSet(j);
        }
        int findSet(int i) {return (p[i]==1) ? 1 : (p[i] = findSet(p[i]));}
        void unionSet(int i, int j){
            if(!isSameSet(i,j)){
                int x = findSet(i), y = findSet(j);
                if(rank[x]>rank[y]){ 
                    p[y] = x;
                    p[x] = y;
                    if(rank[x] == rank[y])
                        rank[y]++;
                }
                
            }
        }
        int numDisjointSets(){
            // return number of disjoint sets

        }
        int sizeOfSet(int i){
            // return size of set that contains i
            
        }
};