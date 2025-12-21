#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin >> n;
	cin.ignore();
	while(n--){
		string a;
		getline(cin, a);
		cout << a[0];
		for(int i=0; i<a.size(); i++){
			if(a[i]==' ')
				cout << a[i+1];
		}
		cout << endl;
	}

	return 0;
}
