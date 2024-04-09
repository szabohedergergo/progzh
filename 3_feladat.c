#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Ellenőrizze, hogy pontosan két argumentum van-e
    if (argc != 3) {
        printf("Hiba: Két számot kell megadni!\n");
        return 1;
    }

    // Az argumentumokat számokká konvertálja
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Ellenőrizze, hogy az argumentumok érvényes számok-e
    if (num1 == 0 && *argv[1] != '0' || num2 == 0 && *argv[2] != '0') {
        printf("Hiba: A megadott értékek nem érvényes számok!\n");
        return 1;
    }

    // Szorozza össze a két számot és nyomtassa ki az eredményt
    int result = num1 * num2;
    printf("A két szám szorzata: %d\n", result);

    return 0;
}