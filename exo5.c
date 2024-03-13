/*Faire un programme qui calcule et affiche le PPCM de deux entiers saisis au clavier*/
#include <stdio.h>
int main (){

    int nombre1, nombre2, PPCM;

int entier1, entier2, ppcm, temp;

    // Saisie des entiers
    printf("Entrez le premier entier : ");
    scanf("%d", &entier1);
    printf("Entrez le deuxième entier : ");
    scanf("%d", &entier2);

    // Calcul du PPCM
    ppcm = (entier1 > entier2) ? entier1 : entier2; // PPCM sera au moins aussi grand que le plus grand des deux entiers
    temp = ppcm;

    while (1) {
        if (ppcm % entier1 == 0 && ppcm % entier2 == 0) {
            printf("Le PPCM de %d et %d est : %d\n", entier1, entier2, ppcm);
            break;
        }
        ppcm += temp;
    }


    return 0;
}

//A revoir