#include<bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0);

	int n;
	cin >> n;
	vector<int> cartas(n,0);
	for(int i=0; i<n; i++){
		int a;
		cin >> a;
		cartas[i] = a;
	}

	// Two pointers
	int left=0, right = n-1;

	long long int sereja=0, dima=0;

	// Sereja -> Par
	for(int i=0; i<n; i++){
		if(left>right){}
		else{
			if(i%2==0){ // Sereja
				if(cartas[left]<cartas[right]){
					sereja+=cartas[right];
					right--;
				}
				else{
					sereja+=cartas[left];
					left++;
				}
			}
			else{
				if(cartas[left]<cartas[right]){
					dima+=cartas[right];
					right--;
				}
				else{
					dima+=cartas[left];
					left++;
				}
			}
		}
	}
	cout << sereja << " " << dima << endl;

}
