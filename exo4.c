/*Faire un programme qui calcule le PGCD de deux nombres saisis au clavier en utilisant l'astuce
suivante: soustrait le plus petit des deux entiers du plus grand jusqu'à ce qu'ils soient égaux.*/

#include <stdio.h>
int main() {

    int n1, n2, PGCD=0;

    printf ("Saisir le premier nombre : \n");
    scanf("%d \n", &n1);
    printf ("Saisir le second nombre : \n");
    scanf("%d \n", &n2);

    while (n1!=n2) {
        if (n1 > n2){
            n1-= n2;
        } else {
            n2-=n1;
        }
    }
    printf ("Le PGCD de %d et %d est %d \n", n1, n2, PGCD);

    return 0;
}