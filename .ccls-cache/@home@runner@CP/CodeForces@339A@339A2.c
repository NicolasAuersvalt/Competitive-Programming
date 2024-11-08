#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char sum[MAX];
    int count[4] = {0};

    scanf("%s", sum);

    for (int i = 0; i < strlen(sum); i++) {
        if (sum[i] != '+') {
            count[sum[i] - '0']++;
        }
    }

    int index = 0;
    for (int i = 1; i <= 3; i++) {
        while (count[i] > 0) {
            sum[index] = i + '0';
            index += 2; 
            count[i]--;
        }
    }

    printf("%s\n", sum);

    return 0;
}
