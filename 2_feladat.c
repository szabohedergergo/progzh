#include <stdio.h>
#include <string.h>

int main() {
    char input[128];
    int email_count = 0;

    while (1) {
        // Felhasználótól szöveg bekérése
        printf("Adjon meg egy szöveget (*-ra kilép): ");
        fgets(input, sizeof(input), stdin);
        
        // Ellenőrizzük, hogy van-e * karakter
        if(input[0] == '*') break;
        
        // Ellenőrizzük, hogy az input tartalmazza-e az @ karaktert
        int i = 0;
        while(input[++i-1] != '\0'){
            if(input[i-1] == '@'){
                email_count++;
                break;
            }
        }
        
        /*
        vagy így (mindkettő jó mert a strchr benne van a csheatben)
        if (strchr(input, '@') != NULL) {
            email_count++;
        }*/
    }

    printf("Összesen %d email címet adott meg.\n", email_count);

    return 0;
}