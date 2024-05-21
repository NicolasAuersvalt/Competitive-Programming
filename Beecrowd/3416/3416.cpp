// If there is more coffee available than necessary, there is no problem

// If there is less coffee than necessary for all the students, they will be angry

// the minimum amount of litres of coffee


#include<stdio.h>

int main() {
    int n = 0, l = 0, d = 0;
    scanf("%d %d %d", &n, &l, &d);

    // qtd min = n * d
    if (n * d > l) {
        int result = ((n * d + l - 1) / l);
        printf("%d", result * l);

    } else {

        printf("%d\n", l);
    }

    return 0;
}

