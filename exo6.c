/*Ecrire l’algorithme qui affiche la somme des prix d'une suite d'articles en CFA (entiers) saisies par
l'utilisateur et se terminant par zéro.*/


#include <stdio.h>
int main (){

    int prix, somme=0;
    do
    {
        printf("Saisir le prix de l'article \n");
        scanf ("%d \n", &prix);
        somme += prix;
    } while (prix !=0);
    
    return 0;
}