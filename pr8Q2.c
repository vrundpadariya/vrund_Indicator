//cubes of all elements from a given 2D array using Pointer with UDF.

#include<stdio.h>

void pointer(int n, int m) {
    int a[n][m];
    int i, j;
    int cube;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int *vrund;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cube = a[i][j] * a[i][j] * a[i][j];
            vrund = &cube;
            printf("%d\n", *vrund);
        }
    }
}

void  main() {
    int n, m;
    printf("Enter the size of a: ");
    scanf("%d", &n);
    printf("Enter the size of b: ");
    scanf("%d", &m);

    pointer(n, m);

    
}
