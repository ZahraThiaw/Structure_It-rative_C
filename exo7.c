/*Écrire un algorithme qui demande successivement 10 nombres à l'utilisateur, et qui affiche à la fin
le plus grand de ces 10 nombres Et affiche aussi son rang dans la liste saisie*/

#include <stdio.h>
int main (){

int nombre, max, rang;

// Initialisation du maximum avec la première valeur saisie
    printf("Entrez le 1er nombre : ");
    scanf("%d", &max);
    rang = 1;
    
    // Demande des 9 autres nombres et comparaison pour trouver le maximum
    for (int i = 2; i <= 10; i++) {
        printf("Entrez le %deme nombre : ", i);
        scanf("%d", &nombre);
        if (nombre > max) {
            max = nombre;
            rang = i;
        }
    }
    
    // Affichage du maximum et de son rang
    printf("Le plus grand nombre est : %d\n", max);
    printf("Son rang dans la liste saisie est : %d\n", rang);

    return 0;
}