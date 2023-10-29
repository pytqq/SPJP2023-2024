#include <stdio.h>

int main() {
    float liczba1, liczba2, liczba3;
    
    // Pobranie trzech liczb od użytkownika
    printf("Podaj pierwsza liczbe: ");
    scanf("%f", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%f", &liczba2);
    printf("Podaj trzecia liczbe: ");
    scanf("%f", &liczba3);

    // Porównanie i wyświetlenie największej liczby
    if (liczba1 >= liczba2 && liczba1 >= liczba3) {
        printf("Najwieksza liczba to: %.2f\n", liczba1);
    } else if (liczba2 >= liczba1 && liczba2 >= liczba3) {
        printf("Najwieksza liczba to: %.2f\n", liczba2);
    } else {
        printf("Najwieksza liczba to: %.2f\n", liczba3);
    }

    return 0;
}