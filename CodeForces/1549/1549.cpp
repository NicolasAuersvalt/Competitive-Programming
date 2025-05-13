#include<bits/stdc++.h>

using namespace std;
typedef string st;
typedef vector<int> vi;

int main(){
	
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		vi count(n,0);
		st inim, me;

		cin.ignore();
		getline(cin, inim);
		getline(cin, me);

		for(int i=0; i < n; i++){
			if(i>0 && i<n-1){
				if(me[i] == '1'){
					if(inim[i-1] == '1'){
						count[i-1]++;
					}
					if(inim[i+1] == '1'){
						count[i+1]++;
					}

				}
			}
			if(me[0] == '1'){
				if(inim[1]=='1')
					count[1]++;

			if(me[n-1] == '1')
				if(inim[n-2])
					count[n-2]++;
			}
		}
		
		int sum=0;

		for(int i=0; i<n; i++){
			if(count[i] == 2 || count[i] == 1){
			sum++;
			}	
		}
		cout << sum << endl;
	}

}
