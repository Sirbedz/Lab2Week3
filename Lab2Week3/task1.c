#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of rows: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }

    // partB////////////////////////////////
    int B;
    printf("Enter the number of rows: ");
    scanf("%d", &B);
    
    int o = 1;
    while (o <= B) {
        int h = 1;
        while (h <= N - o) {
            printf(" ");
            h++;
        }
        int k = 1;
        while (k <= o) {
            printf("*");
            k++;
        }
        printf("\n");
        o++;
    }
    return 0;
}

