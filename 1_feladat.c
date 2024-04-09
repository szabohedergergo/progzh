#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define AMENNYI_RANDOM_SZAM_KELL 5

#define MIN -2024
#define MAX 2024

int main() {
    int i, random_numbers[AMENNYI_RANDOM_SZAM_KELL], negative_count = 0;

    // Random számok generálása -2024 és 2024 között
    srand(time(NULL)); // Seed az aktuális időpont alapján
    for (i = 0; i < AMENNYI_RANDOM_SZAM_KELL; ++i) {
        random_numbers[i] = rand() % (MAX - MIN + 1) + MIN; //4049 - 2024

        if (random_numbers[i] < 0) {
            negative_count++;
        }

        printf("%d ", random_numbers[i]);
    }
    
    printf("\nNegatív számok száma: %d\n", negative_count);

    return 0;
}