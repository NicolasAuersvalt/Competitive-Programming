#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	vector<int> cumulative(s.size(), 0);
	for(int i=1; i<s.size(); i++){ 
		cumulative[i]=cumulative[i-1];
		if(s[i-1]==s[i]) cumulative[i]++; 
	}
	int m; cin >> m;
	while(m--)
	{
		int a, b; cin >> a >> b;
		cout << cumulative[b-1]-cumulative[a-1] << endl;
	}
	return 0;

}
