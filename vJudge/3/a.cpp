#include<bits/stdc++.h>

using namespace std;

#define MAX 10E12

int minimo(int n, int a, int b){
	// a - 1l
	// b - 2l
	int dA=n/2*a, dB=n/b, div;
	if(dA<dB)
		return (n/2 * b) + (n%2);
	else if(dB>dA)
		return n*a ;

}	

int main(){

	int q;
	cin >> q;
	while(q--){
		int a, b, n;
		cin >> n >> a >> b;

		cout << minimo(n, a, b) << endl;
	}
}
