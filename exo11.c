/*Écrire un programme qui permet de saisir un nombre entier positif, le programme détermine et
affiche si le nombre est premier ou pas*/

#include <stdio.h>
int main (){

int nombre, nbrPremier = 1; // Initialisation à 1 pour supposer que le nombre est premier par défaut

    printf("Entrez un nombre entier positif : ");
    scanf("%d", &nombre);

    // Vérification si le nombre est premier
    if (nombre <= 1) {
        nbrPremier = 0;
    } else {
        for (int i = 2; i * i <= nombre; i++) {
            if (nombre % i == 0) {
                nbrPremier = 0; 
                break; 
            }
        }
    }

    // Affichage du résultat
    if (nbrPremier) {
        printf("%d est un nombre premier.\n", nombre);
    } else {
        printf("%d n'est pas un nombre premier.\n", nombre);
    }

    
    return 0;
}
//A revoir