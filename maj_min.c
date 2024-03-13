#include <stdio.h>

int main() {
    char lettre;

    // Demande à l'utilisateur de saisir une lettre
    printf("Veuillez saisir une lettre : ");
    scanf("%c", &lettre);

    // Vérifie si la lettre est en minuscule
    if (lettre >= 'a' && lettre <= 'z') {
        // Si oui, convertit en majuscule
        lettre = lettre - 'a' + 'A';
        printf("La lettre en majuscule est : %c\n", lettre);
    }
    // Vérifie si la lettre est en majuscule
    else if (lettre >= 'A' && lettre <= 'Z') {
        // Si oui, convertit en minuscule
        lettre = lettre - 'A' + 'a';
        printf("La lettre en minuscule est : %c\n", lettre);
    }
    // Si ce n'est pas une lettre, affiche un message d'erreur
    else {
        printf("Erreur: Veuillez saisir une lettre.\n");
    }

    return 0;
}
