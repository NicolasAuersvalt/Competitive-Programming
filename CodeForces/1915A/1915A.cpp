#include<iostream>
using namespace std;


int main(){


	int n;
	cin >> n;

	while(n--){
		int a, b, c;
		cin >> a >> b >> c;
		if((a^b)==0)
			cout<< c << endl;
		if((b^c)==0)
			cout << a << endl;
		if((c^a)==0)
			cout << b << endl;

	}

	return 0;
}
