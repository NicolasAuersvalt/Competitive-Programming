#include<bits/stdc++.h>

using namespace std;

int main(){


	unordered_map<string,int> mapa = {{"Tetrahedron",4},{"Cube",6},{"Octahedron",8},{"Dodecahedron",12},{"Icosahedron", 20}};

	int n;
	cin >> n;
	int sum=0;
	cin.ignore();

	while(n--){
		string a;
		getline(cin, a);
		sum += mapa[a];
	}
	cout << sum << endl;

	return 0;
}
