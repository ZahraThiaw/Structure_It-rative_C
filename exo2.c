/* Ecrire un algorithme qui demande un nombre de départ, et qui calcule la somme des entiers
jusqu'à ce nombre. Par exemple, si l'on tape 4 , l’algorithme doit calculer: 1 + 2 + 3+ 4 = 10 Réécrire l'algorithme
qui calcule cette fois la moyenne ! */

#include <stdio.h>
int main (){

    int nombre, somme=1;
     printf ("Saisir un nombre: \n");
     scanf ("%d", &nombre);

    for (int a= 1; a <= nombre; a++){
        somme += a;
    }

    printf ("La somme des entiers jusqu'à %d est %d \n", nombre, somme);

    return 0;
}