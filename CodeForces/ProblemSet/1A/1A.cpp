#include <stdio.h>
 
int main() {
    int m, n, a;
    scanf("%d %d %d", &m, &n, &a);
 
    long long int area = ((long long int)(m + a - 1) / a) * ((long long int)(n + a - 1) / a);
 
    printf("%lld\n", area);
 
    return 0;
}