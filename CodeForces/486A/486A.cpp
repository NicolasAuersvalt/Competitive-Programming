#include<iostream>
using namespace std;

int main() {
  long long int n=0, sum=0;
  cin >> n;

  if(n%2==0)
    sum = n/=2;

  else{
    sum = ((n+1)/2)*(-1);
  }

    cout << sum;

    return 0;
}
