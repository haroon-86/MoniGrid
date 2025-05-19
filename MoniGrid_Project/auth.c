#include <stdio.h>
#include <string.h>

#define USER "operator"
#define PASS "monigrid"
#define SECURE_KEY "RTU123"

int authenticate_operator() {
    char user[20], pass[20], key[20];

    printf("Username: ");
    scanf("%s", user);
    printf("Password: ");
    scanf("%s", pass);
    printf("Enter RTU Access Key: ");
    scanf("%s", key);

    return strcmp(user, USER) == 0 && strcmp(pass, PASS) == 0 && strcmp(key, SECURE_KEY) == 0;
}