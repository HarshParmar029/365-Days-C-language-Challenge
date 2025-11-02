#include <stdio.h>
// Function to search an element in array (Linear Search)
int searchElement(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // Return index if element found
    }
    return -1; // Return -1 if not found
}
int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);

    int index = searchElement(arr, n, key);
    if (index != -1)
        printf("Element %d found at position %d.\n", key, index + 1);
    else
        printf("Element %d not found in array.\n", key);
    return 0;
}

