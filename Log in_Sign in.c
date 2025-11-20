#include <stdio.h>
#include <string.h>

int main() {
    char uname[50], pass[50];
    char u[50], p[50];
    int choice;

    while (1) {
        printf("\n=== Login/Signup System ===\n");
        printf("1. Signup\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // SIGNUP
            FILE *fp = fopen("user.txt", "w");
            if (!fp) {
                printf("Error opening file!\n");
                return 1;
            }

            printf("Enter new username: ");
            scanf("%s", uname);
            printf("Enter new password: ");
            scanf("%s", pass);

            fprintf(fp, "%s %s", uname, pass);
            fclose(fp);

            printf("Signup successful!\n");
        }

        else if (choice == 2) {
            // LOGIN
            FILE *fp = fopen("user.txt", "r");
            if (!fp) {
                printf("No user found! Please signup first.\n");
                continue;
            }

            fscanf(fp, "%s %s", u, p);
            fclose(fp);

            printf("Enter username: ");
            scanf("%s", uname);
            printf("Enter password: ");
            scanf("%s", pass);

            if (strcmp(uname, u) == 0 && strcmp(pass, p) == 0)
                printf("Login Successful!\n");
            else
                printf("Invalid username or password!\n");
        }

        else if (choice == 3) {
            printf("Exiting...\n");
            break;
        }

        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
