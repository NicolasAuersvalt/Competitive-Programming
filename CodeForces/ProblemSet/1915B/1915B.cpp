#include<iostream>

using namespace std;

int main(){

	int total = 594, n;
	cin >> n;
	while(n--){
		int sum=0;
		for(int i=0; i<3; i++){
			char a, b, c;

			cin >> a >> b >> c;
			if(a=='?')
				a = 64;
			if(b=='?')
				b = 64;
			if(c=='?')
				c = 64;

			sum+=a+b+c;
		}
		char res = (total-sum)+64;
		cout << res << endl;
	}


}
