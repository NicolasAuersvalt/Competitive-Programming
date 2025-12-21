#include<iostream>

using namespace std;
typedef long long ll;

int main(){

	int n;
	cin >> n;
	while(n--){
		ll m=0, sum;
		cin >> m;
		sum = m;
		while (m>0){

			m = (m/2);
			sum += m;
				
		}
		cout << sum << endl;

	}

	return 0;
}


