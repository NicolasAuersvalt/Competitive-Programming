#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int t, n;
	cin >> t;

	while (t--){ 
		cin >> n;
		vector<int> A;
		for (int i = 0; i<n;i++){
			int a;
			cin >> a; 
			A.push_back(a);}
	
		sort(A.begin(),A.end());
		
		if (A[0] > A[1] - A[0])
			cout << A[0] << '\n';

		else
			cout << A[1]-A[0] <<'\n';}

	return 0;} 	
