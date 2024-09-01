#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    fgets(str, 50, stdin); // Read the entire line including spaces

    int cnt = 0;
    char *token = strtok(str, " ");
    while (token != NULL) {
        printf("%s\n", token);
        cnt++;
        token = strtok(NULL, " ");
    }
    printf("%d\n", cnt);

    return 0;
}
