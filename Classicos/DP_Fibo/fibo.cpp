#include<bits/stdc++.h>

using namespace std;

int fibo(int n, vector<int>& memo){

	if(n<=1) return n;

	if(memo[n]!=-1) return memo[n];

	memo[n] = fibo(n-1, memo) + fibo(n-2, memo);

	return memo[n];
}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	vector<int> memo(n+1, -1);

	cout << "o fibo de " << n << " eh " << fibo(n, memo) << endl;
}
