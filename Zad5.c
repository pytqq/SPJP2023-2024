#include <stdio.h>
#include <ctype.h>

int main() {
    char znak;
    int kod;
    
    // Pobranie danych od użytkownika
    printf("Podaj znak ASCII lub jego kod: ");
    if (scanf("%d", &kod) == 1) {
        znak = (char)kod; // Konwersja kodu ASCII na znak
    } else {
        scanf(" %c", &znak); // Pobranie znaku bezpośrednio
        kod = (int)znak; // Konwersja znaku na kod ASCII
    }

    // Sprawdzenie, czy znak jest literą alfabetu
    if (isalpha(znak)) {
        printf("Podany znak \"%c\" o kodzie ASCII %d jest literą alfabetu.\n", znak, kod);
    } else {
        printf("Podany znak \"%c\" o kodzie ASCII %d nie jest literą alfabetu.\n", znak, kod);
    }

    return 0;
}