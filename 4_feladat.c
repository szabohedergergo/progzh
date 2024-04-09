#include <stdio.h>

int main() {
    char input[128];
    char output[128];

    // Felhasználótól sztring bekérése
    printf("Adjon meg egy szöveget: ");
    fgets(input, sizeof(input), stdin);

    // Csillagokkal történő helyettesítés és eredmény kiírása
    for (int i = 0; input[i] != '\0'; ++i) {
        output[i] = (input[i] == 'X' || input[i] == 'x') ? '*' : input[i];
    }

    printf("Eredmény: %s", output);

    return 0;
}