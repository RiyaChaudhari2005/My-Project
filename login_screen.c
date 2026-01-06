#include <stdio.h>
#include <string.h>

int main() {
    char username[50], password[50];

    printf("=== LOGIN SCREEN ===\n");
    printf("Enter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%s", password);

    printf("\nUsername Entered: %s\n", username);
    printf("Password Entered: %s\n", password);

    if(strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0) {
        printf("\nLogin Successful!\n");
    } else {
        printf("\nInvalid Username or Password.\n");
    }

    return 0;
}