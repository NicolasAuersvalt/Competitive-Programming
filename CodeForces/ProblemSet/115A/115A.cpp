#include <bits/stdc++.h>
using namespace std;

int going(int val, const vector<pair<int, int>>& vet) {
    //cout << "going " << vet[val].first << endl;
    if (vet[val].first == -2) { // chegou ao topo
        return 0;
    }
    return going(vet[val].first, vet) + 1;
}

void ranking(vector<pair<int, int>>& vet) {
    for (int j = 0; j < vet.size(); j++) {
        vet[j].second = going(j, vet);
	//cout << "vet[" << j << "] =" << vet[j].second << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> vet; // {manager, rank}

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        vet.push_back({a-1, 0});
    }

    ranking(vet);
    set<int> counter;
    for(int i=0; i<vet.size(); i++){
	counter.insert(vet[i].second);
    }
    cout << counter.size() << endl;

    return 0;
}

