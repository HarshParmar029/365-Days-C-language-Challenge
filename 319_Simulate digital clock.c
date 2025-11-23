#include <stdio.h>
#include <time.h>
#include <unistd.h>  // for sleep()

int main() {
    while (1) {
        time_t now = time(NULL);       // get current time
        struct tm *t = localtime(&now); // convert to hour/min/sec

        printf("\rTime: %02d:%02d:%02d",
               t->tm_hour, t->tm_min, t->tm_sec);

        fflush(stdout); // refresh screen
        sleep(1);       // wait 1 second
    }
    return 0;
}
