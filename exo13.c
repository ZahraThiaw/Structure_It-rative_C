/*Écrire un programme qui permet de saisir une suite de nombres premiers, le programme s'arrête
lorsque l’utilisateur tape la valeur zéro (0). Le programme affiche le nombre d’entiers saisi, le nombre de
nombre premiers et affiche tous les nombre premiers.*/

#include <stdio.h>
int main (){

int nombre, nbrEntier = 0, nbrNbrPremier = 0;

    printf("Entrez une suite de nombres premiers (0 pour terminer) :\n");

    do {
        scanf("%d", &nombre);
        if (nombre != 0) {
            // Vérification si le nombre est premier
            int nbrPremier = 1; // Supposons que le nombre est premier
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

            nbrEntier++;
            if (nbrPremier) {
                printf("%d est un nombre premier.\n", nombre);
                nbrNbrPremier++;
            }
        }
    } while (nombre != 0);

    printf("\nNombre total d'entiers saisis : %d\n", nbrEntier);
    printf("Nombre de nombres premiers saisis : %d\n", nbrNbrPremier);

    
    return 0;
}
