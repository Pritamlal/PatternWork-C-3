#include<stdio.h>

int main() {
    int i, j, n;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    // First half of the pattern
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    // Second half of the pattern
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}

