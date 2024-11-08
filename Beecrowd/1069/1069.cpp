#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n=0, i, j;

	cin >> n;
	cin.ignore();

	for(i=0; i<n; i++){

		int dima=0;
		
		string str;
		stack<char> apoio;

		getline(cin, str);
		
		for(j=0; j<str.size(); j++){

			// armazena em uma stack os <
			if(str[j]=='<'){
				apoio.push(str[j]);
			}
				
			else if(str[j] == '>' && !empty(apoio)){
				apoio.pop();
				dima++;
			}
		}
		cout << dima << endl;

	}


	return 0;
}
