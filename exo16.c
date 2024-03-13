/*Écrire un programme qui permet de dessiner un sapin. le programme demande les informations
suivantes avant d’afficher le sapin :
- le symbole à utiliser pour dessiner le sapin : $,*,+ ou 0.
- la hauteur des feuilles.
- la hauteur du tronc.
- la largeur des racines.*/

#include <stdio.h>
int main (){

char symbole;
    int hauteur_feuilles, hauteur_tronc, largeur_racines;
    
    // Demander à l'utilisateur les informations
    printf("Entrez le symbole à utiliser ($, *, + ou 0) : ");
    scanf(" %c", &symbole);
    printf("Entrez la hauteur des feuilles : ");
    scanf("%d", &hauteur_feuilles);
    printf("Entrez la hauteur du tronc : ");
    scanf("%d", &hauteur_tronc);
    printf("Entrez la largeur des racines : ");
    scanf("%d", &largeur_racines);
    
    // Dessiner les feuilles
    for (int i = 0; i < hauteur_feuilles; i++) {
        for (int j = 0; j < hauteur_feuilles - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("%c", symbole);
        }
        printf("\n");
    }
    
    // Dessiner le tronc
    for (int i = 0; i < hauteur_tronc; i++) {
        for (int j = 0; j < hauteur_feuilles - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < largeur_racines; j++) {
            printf("%c", symbole);
        }
        printf("\n");
    }
    
    // Dessiner les racines
    for (int i = 0; i < largeur_racines; i++) {
        for (int j = 0; j < hauteur_feuilles - 1; j++) {
            printf(" ");
        }
        printf("%c\n", symbole);
    }

    
    return 0;
}
//A revoir