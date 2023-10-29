#include <stdio.h>

int main() {
    float liczba1, liczba2;
    
    // Pobranie dwóch liczb od użytkownika
    printf("Podaj pierwsza liczbe: ");
    scanf("%f", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%f", &liczba2);

    // Porównanie i wyświetlenie większej liczby
    if (liczba1 > liczba2) {
        printf("Wieksza liczba to: %.2f\n", liczba1);
    } else if (liczba2 > liczba1) {
        printf("Wieksza liczba to: %.2f\n", liczba2);
    } else {
        printf("Podane liczby sa rowne: %.2f\n", liczba1); // lub liczba2, bo są równe
    }

    return 0;
}