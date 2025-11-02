#include <stdio.h>
// Function to find average of array elements
float findAverage(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return (float)sum / n;
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
    float avg = findAverage(arr, n);

    printf("Average of array elements = %.2f\n", avg);
    return 0;
}
