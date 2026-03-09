#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int h = 0;
    int level = 1;

    while(true){
        int cubes = level * (level + 1) / 2;

        if(n < cubes)
            break;

        n -= cubes;
        h++;
        level++;
    }

    cout << h << endl;
}