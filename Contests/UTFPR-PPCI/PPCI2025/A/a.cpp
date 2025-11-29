#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string, int>> m = {
        {"Abigail",0},{"Sebastian",0},{"Penny",0},{"Sam",0},{"Leah",0},
        {"Harvey",0},{"Haley",0},{"Maru",0},{"Alex",0},{"Emily",0}
    };
    while (n--) {
        string a;
        int b;
        cin >> a >> b;
        for (auto &p : m) {
            if (p.first == a) {
                p.second += b;
            }
        }
    }
    for (auto &p : m) {
        int res = min(8,p.second/250);
        if(res!=0)
            cout << p.first << " " << res << endl;
    }
}
