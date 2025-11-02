#include <stdio.h>
// Function to find maximum element in array
int findMax(int arr[], int n) {
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = findMax(arr, n);

    printf("Maximum element = %d\n", max);
    return 0;
}
