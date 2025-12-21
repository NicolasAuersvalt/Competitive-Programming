#include<bits/stdc++.h>


using namespace std;


int main(){

	string a;

	getline(cin,a);

	set<char> verify;
	for(int i=0; i<a.size(); i++){
		verify.insert(a[i]);
	}
	(verify.size() % 2 == 0) ? cout << "CHAT WITH HER!" << endl : cout << "IGNORE HIM!" << endl;

}
