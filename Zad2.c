#include <stdio.h>

int main() {
    float liczba1, liczba2;
    
    // Pobranie dwóch liczb od użytkownika
    printf("Podaj pierwsza liczbe: ");
    scanf("%f", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%f", &liczba2);

    // Wykonanie operacji matematycznych
    printf("Wynik dodawania: %.2f + %.2f = %.2f\n", liczba1, liczba2, liczba1 + liczba2);
    printf("Wynik odejmowania: %.2f - %.2f = %.2f\n", liczba1, liczba2, liczba1 - liczba2);
    printf("Wynik mnozenia: %.2f * %.2f = %.2f\n", liczba1, liczba2, liczba1 * liczba2);
    
    // Sprawdzenie, czy druga liczba jest różna od zera, aby uniknąć dzielenia przez zero
    if (liczba2 != 0) {
        printf("Wynik dzielenia: %.2f / %.2f = %.2f\n", liczba1, liczba2, liczba1 / liczba2);
        printf("Reszta z dzielenia: %.2f %% %.2f = %.2f\n", liczba1, liczba2, (liczba1, liczba2));
    } else {
        printf("Nie można dzielić przez zero!\n");
    }

    return 0;
}