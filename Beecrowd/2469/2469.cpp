#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin >> n;

	unordered_map<int, int> dict(n);

	int i;
	for(i = 0; i < n; i++){
		int x;
		cin >> x;
		dict[x]++;
	}


	int freq = 0, valueFreq=0;
	
	for(auto par: dict){
		if(par.second > freq){
			freq = par.second;
			valueFreq = par.first;
		}
		else if((par.second == freq) && (par.first > valueFreq)){
			 freq = par.second;
			 valueFreq = par.first;
		}
	}
	cout << valueFreq << endl;
	
	
	return 0;
}
