/*Ecrire un algorithme qui permet de saisir un nombre entier positif puis détermine et affiche le nombre de chiffre*/

#include <stdio.h>
int main (){

    int entier, nbrchifre=0;

    do
    {
        printf ("Saisir un nombre entier positif: ");
        scanf ("%d", &entier);
    } while (entier<0);

    if (entier==0)
        {
            nbrchifre= 1;
        }
        
    while (entier !=0)
    {
        entier = entier/10;
        nbrchifre++ ;
    }
    
    
    
    printf ("Le nombre de chiffre est : %d \n",nbrchifre);

    return 0;
}

