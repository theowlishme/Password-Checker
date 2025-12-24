#include <stdio.h>
#include <string.h>

int main() {
    char password[30];
    int i;
    int capital,small,number,special;
    int length;

    printf("Enter password: ");
    scanf("%s", password);
    length = strlen(password);

    for (i = 0; i < length; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            capital = 1;
        }
        else if (password[i] >= 'a' && password[i] <= 'z') {
            small = 1;
        }
        else if (password[i] >= '0' && password[i] <= '9') {
            number = 1;
        }
        else {
            special = 1;
        }
    }

    if (length < 6) {
        printf("Weak password\n");
    }
    else if (capital && small && number && special && length >= 8) {
        printf("Strong password\n");
    }
    else {
        printf("Medium Password\n");
    }

    return 0;
}
