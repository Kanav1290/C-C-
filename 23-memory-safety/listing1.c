#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *welcome_message = "Hi there!\n"; // shortened welcome message, only 11 chars now
char *password = "secret";
char entered_password[128];

int main(int argc, char **argv) {
    // Print welcome message character by character
    for(int i=0; i<27; i++) {  // Oopsie!
        printf("%c", welcome_message[i]);
    }

    printf("Please input the password:\n");
    scanf("%s", entered_password);

    if(!strcmp(entered_password, password)) {
        printf("Passowrd ok!\n");
    /* ... */
    } else {
        printf("Wrong password! aborting\n");
    }

    return 0;
}
