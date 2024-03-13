#include <stdio.h>

int main() {
    char caractere;

    // Demander à l'utilisateur de saisir un caractère
    printf("Veuillez saisir un caractère : ");
    scanf("%c", &caractere);

    // Afficher le code ASCII du caractère saisi
    printf("Le code ASCII de %c est %d.\n", caractere, caractere);

    return 0;
}
