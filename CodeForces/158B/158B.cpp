#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
	ll sum=0;
	vector<int> vet(5,0);

	int n;
	cin >> n;
	while(n--){
		int a; cin >> a;
		vet[a]++;
	}
	
	sum+=vet[4]+vet[3];
	vet[1]-=vet[3];
	if(vet[1]<0) vet[1]=0;

	if(vet[2]>=2)
	{
		sum+=vet[2]/2;
		vet[2]=vet[2]%2;
	}
	
	if(vet[2]>=1 && vet[1]){
		sum++;
		vet[2]--;
		vet[1]-=2;
	}
	if(vet[2]>=1){
		sum++;
	}
	while(vet[1]>0){
		vet[1]-=4;
		sum++;
	}
	cout << sum << endl;

	return 0;
}
