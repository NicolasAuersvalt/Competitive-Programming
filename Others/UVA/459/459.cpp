#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vi Visited(27,0);

void dfs(int v, vector<vector<int>> &AdjList){
	Visited[v] = 1;
	for(int it : AdjList[v]){
		if(!Visited[it]){
			dfs(it, AdjList);
		}
	}

}

int main(){
	int n;
	cin >> n;

	vector<vector<int>> AdjList(27);
	int counter=1;

	while(n--){

		char a;
		char b;

		cin >> a;
		cin >> b;

		AdjList[(int)a-64].push_back((int)b-64);	
		AdjList[(int)b-64].push_back((int)a-64);	

	}

	dfs(((int)'A'-64), AdjList);

	for(int i=0; i<Visited.size(); i++){
		if(Visited[i]==0 && !AdjList[i].empty()){
			cout << "Falta para" << char(i+64) << endl;
			dfs(i, AdjList);
			counter++;
		}
	}
	cout << counter << endl;



}
