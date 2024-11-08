#include <iostream>
#include <vector>
using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, counter=0, b;
    cin >> a;
    for(int i=0; i<=4; i++){
        cin >> b;
        if(b==a) counter++;
    }
    cout << counter << endl;
    
 
    return 0;
}
