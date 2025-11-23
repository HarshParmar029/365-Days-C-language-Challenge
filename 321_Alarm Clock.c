#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    int h, m, s;
    printf("Set Alarm (HH MM SS): ");
    scanf("%d %d %d", &h, m, s);

    while (1) {
        time_t now = time(NULL);
        struct tm *t = localtime(&now);

        if (t->tm_hour == h && t->tm_min == m && t->tm_sec == s) {
            printf("\n\n*** ALARM RINGING ***\n");
            for (int i = 0; i < 5; i++) {
                printf("\a"); // beep
                sleep(1);
            }
            break;
        }

        sleep(1);
    }

    return 0;
}
