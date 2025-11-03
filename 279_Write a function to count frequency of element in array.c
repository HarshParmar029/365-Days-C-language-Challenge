#include <stdio.h>
void countFrequency(int arr[], int size) {
    int visited[size];  // To track visited elements

    for (int i = 0; i < size; i++) {
        // Skip if already counted
        if (visited[i] == 1)
            continue;

        int count = 1;  // Count current element
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark as visited
            }
        }

        printf("%d occurs %d times\n", arr[i], count);
    }
}
int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Initialize visited array to 0
    for (int i = 0; i < n; i++) {
        arr[i];
    }
    printf("\nFrequency of each element:\n");
    int visited[n];
    for (int i = 0; i < n; i++)
        visited[i] = 0;  // Initialize all as not visited

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1)
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
    return 0;
}
