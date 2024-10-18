#include <stdio.h>

int main() {
    int arr[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int element, mid;
    printf("Enter element to find: ");
    scanf("%d", &element);
    int left=0;
    int right = (sizeof(arr)/sizeof(arr[0]))-1;

    while (left<=right)
    {
    mid = (left + right)/2;
    if (arr[mid] == element)
    {
        printf("Element Found!");
        break;
    }
    else if (element>arr[mid])
    {
        left = mid+1;
    }
    else{
        right = mid-1;
    }
    }
    if (left>right)
    {
        printf("Element not found!\n");
    }
    
    return 0;
}