#include <stdio.h>

int main() {
    int n1, n2, i, j;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter element: ");
    for (i = 0; i < n1; i++) {
  
        scanf("%d", &arr1[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter element: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    int total = n1+n2;
    int merged[total];
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }
    printf("Merged array: ");
    for (i = 0; i < total; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}
