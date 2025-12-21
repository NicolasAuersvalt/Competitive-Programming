#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, q; cin >> n;
	map<int, int> shops;
	for(int i=0; i<n; i++){
		int a;
		cin >> a;
		shops[a]++;
	}

	cin >> q;

	while(q--)
	{
		int a, sum =-1;
		cin >> a;
		shops[a]++;
		for (auto& [numero, freq] : shops) {
			sum+=freq;
        		if(numero==a)
			{
				cout << sum << endl;
				break;
			}
    		}
		shops[a]--;

	}

	return 0;
}
