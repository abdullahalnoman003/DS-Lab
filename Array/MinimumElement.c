#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n], min;
    printf("Enter element: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Minimum element: %d\n", min);
    return 0;
}
