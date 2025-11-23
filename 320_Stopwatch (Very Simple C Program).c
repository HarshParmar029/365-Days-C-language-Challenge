#include <stdio.h>
#include <time.h>

int main() {
    char c;
    double elapsed = 0;
    clock_t start;
    int running = 0;

    printf("Stopwatch\n");
    printf("s = start, p = stop, r = reset, q = quit\n");

    while (1) {
        printf("\nEnter command: ");
        scanf(" %c", &c);

        if (c == 's') {
            running = 1;
            start = clock();
        }
        else if (c == 'p') {
            if (running) {
                elapsed += (double)(clock() - start) / CLOCKS_PER_SEC;
                running = 0;
            }
        }
        else if (c == 'r') {
            running = 0;
            elapsed = 0;
        }
        else if (c == 'q') {
            break;
        }

        if (running)
            printf("Time: %.2f sec (running)\n", elapsed + (double)(clock() - start) / CLOCKS_PER_SEC);
        else
            printf("Time: %.2f sec (stopped)\n", elapsed);
    }
    return 0;
}
