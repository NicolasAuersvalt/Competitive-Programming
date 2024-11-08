#include<iostream>
using namespace std;

int main(){

	int a, b, c;
	cin >> a >> b >> c;
	if(a>b && b>c){ // a>b>c
		cout << b;
	} else if(a>c && c>b){ // a>c>b
		cout << c;
	} else if(b>a && a>c){ // b>a>c
		cout << a;
	} else if(b>c && c>a){ // b>c>a
		cout << c;
	} else if(c>a && a>b){ // c>a>b
		cout << a;
	} else{
		cout << b;
	}
	return 0;
}
