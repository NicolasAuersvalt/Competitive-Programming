#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int h = n/(60*60);
    int m = (n%(60*60))/60;
    int s = (n%(60*60))%60;

    cout << h << ":" << m << ":" << s << endl;

    return 0;
}