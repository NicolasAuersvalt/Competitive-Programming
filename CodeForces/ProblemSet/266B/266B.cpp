#include<bits/stdc++.h>

using namespace std;


int main(){

	int n, t;
	string a;
	cin >> n >> t;
	cin.ignore();
	getline(cin, a);

	while(t--){
		for(int i=1; i<a.size(); i++){
			if(a[i]=='G' && a[i-1] == 'B'){
				swap(a[i],a[i-1]);
				i++;
			}
		}
	}
	cout << a << endl;


	return 0;
}
