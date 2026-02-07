#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
		
	while(t--){
		int s,k,m;
		cin >> s >> k >> m;
		
		if (s <= k){
			if (m < k){
				if (s < m) cout << 0 << '\n';
				else cout << s-m << '\n';}
									
			else if (m>=k){	

		    	if ((m/k)%2 == 0){
					if (s-m%k < 0) cout << 0 << '\n';
					else if (m%k == 0) cout << s << '\n';
					else cout << s-(m%k) << '\n';}

				else if ((m/k)%2 != 0){
					if (s - m%k < 0) cout << 0 << '\n';
					else if (m%k == 0) cout << s << '\n';
					else cout << s - (m%k) << '\n';}}}
		
		else{
			if (m < k){
				if (s < m) cout << 0 << '\n';
				else cout << s-m << '\n';}
									
			else if (m>=k){	

		    	if ((m/k)%2 == 0){
					if (s-m%k < 0) cout << 0 << '\n';
					else if (m%k == 0) cout << s << '\n';
					else cout << s-(m%k) << '\n';}

				else if ((m/k)%2 != 0){
					if (s - m%k < 0) cout << 0 << '\n';
					else if (m%k == 0) cout << k << '\n';
					else cout << k - (m%k) << '\n';}}}}

			
	return 0;} 	
