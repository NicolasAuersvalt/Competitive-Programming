#include<bits/stdc++.h>


using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;

class UnionFind{

	private: vi p, rank;
		 // p = parents, rank = level

	public:
		 UnionFind(int N)
		 {
			 // start
			 rank.assign(N,0);
			 p.assign(N,0);
			 for(int i=0; i<N; i++){
				 p[i] = i;
			 }
		 };
		 bool isSameSet(int i, int j){
			 // return if a set is equal to another
			 return findSet(i) == findSet(j);
		 }
		 int findSet(int i) {
			 // seek for the set's root
			 return (p[i]==1) ? 1 : (p[i] = findSet(p[i]));
		 }
		 void unionSet(int i, int j){
			 // check if it's from the same set
			 if(!isSameSet(i,j)){
				 //find the root of each set
				 int x = findSet(i), y = findSet(j);
				 // verify which one is greater than the other
				 if(rank[x]>rank[y]){ 
					 // the root will change to the greater
					 p[y] = x;

					 // greater will change to the lower
					 p[x] = y;

					 // double connection
					 // if these two are equal
					 if(rank[x] == rank[y])
						 // increate the size
						 rank[y]++;
				 }

			 }
		 }
		 int numDisjointSets(){
			 // return number of disjoint sets
			 vb confirm(p.size(), false);
			 int total =0;
			 // running along parent's size
			 for(int i=0, j=i; i<p.size(); i++){
				j = i;
				while(p[j]!=j){
					confirm[j]=true;
					j = p[j];
					if(p[j]!=j)
						total++;
				}
			 }
			 return total;

		 }
		 int sizeOfSet(int i){
			 // return size of set that contains i
			for(int i=0; i<rank.size()); i++){
				while(p[i]!=i){
					p = p[i];
				}
			}
			return rank[i];
		 }
};
