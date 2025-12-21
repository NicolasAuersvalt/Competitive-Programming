#include <stdio.h>
#include <math.h>
#define N 101
int main(){
	int t;
	int n;
	char M[N][N];
	int ans = 0;
	scanf("%d", &t);
	scanf("%d", &n);

	for (int i = 0; i < t; i++){
		
		for (int x = 0; x < n; x++){
			for (int y = 0; y < n; y++){
				scanf("%c", &M[x][y]);}}
		
		for (int x = 0; x < n; x++){
			for (int y = 0; y < n; y++){
				if (M[x][y] < M[x + n%x][y + n%y])
					ans += M[x][y] - M[x + n%x][y + n%y];}}}
	printf("%d", ans);

	return 0;}
