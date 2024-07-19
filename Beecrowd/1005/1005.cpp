#include<iostream>
#include <iomanip>

using namespace std;

int main(){

  long double a, b, c=2.0, d;
  cin >> a >> b;
  a *=3.5;
  b *=7.5;
  d = (a+b)/(3.5+7.5);

  cout << "MEDIA = " << fixed << setprecision(5) << d << endl;

  return 0;
}