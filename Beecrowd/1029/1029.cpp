#include<iostream>

using namespace std;

int fibonacci(int n, int *count){
	
	if(n<0){return 0;}
	(*count)++;
	if(n==0){return 0;}
	if(n==1){return 1;}
	return fibonacci(n-1, count) + fibonacci(n-2, count);

}


int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int m;
	cin >> m;
	for(int i=0; i<m; i++){
		int l, counter = 0;
		cin >> l;
		int result = fibonacci(l, &counter);
		cout << "fib(" << l << ") = " << counter-1 << " calls = " << result << endl;
	}

	return 0;
}
