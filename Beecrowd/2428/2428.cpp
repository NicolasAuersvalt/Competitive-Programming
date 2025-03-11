#include <stdio.h>

bool check(int PM, int PN, int QM, int QN) {
	return (PM * QN == PN * QM);
}

int A, B, C, D;

int main() {

	while (scanf(" %d %d %d %d", &A, &B, &C, &D) != EOF && !(A == 0 || B == 0 || C == 0 || D == 0)) {
		if (check(A, B, C, D) || check(A, D, B, C) || check(A, C, D, B)) {
			printf("S\n");
		} else {
			printf("N\n");	
		}
	}

	return 0;
}

