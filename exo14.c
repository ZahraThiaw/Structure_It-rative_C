/*Écrire un programme qui permet de saisir un entier positif N, le programme affiche tous les
nombres premiers compris entre 1 et N.*/

#include <stdio.h>
int main (){

int N;

    printf("Entrez un entier positif N : ");
    scanf("%d", &N);

    // Affichage des nombres premiers jusqu'à N
    printf("Nombres premiers jusqu'a %d :\n", N);
    for (int i = 2; i <= N; i++) {
        int estPremier = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                estPremier = 0;
                break;
            }
        }
        if (estPremier) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}