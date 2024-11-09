#include<bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0);
	int a;
	cin >> a;

	for(int i=0; i<a; i++){
	
		int b;
		cin >> b;
		int prim=2, seg=2;
		for(int j=0; j<b; j++){
			int c;
			cin >> c;
			c==1? prim++ : seg++ ;
		}
			
		if((prim % 2 == 0) && (seg % 2 == 0)){
			cout << "Yes" << endl;
		}
		else if((seg%2 !=0) && prim % 2 == 0 && prim >2){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}

	
	}

	return 0;
}
