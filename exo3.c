/*Faire un programme qui calcule et affiche la division de a par b par soustractions successives */

#include <stdio.h>
int main () {
     int a, b, compte=0;

     printf ("Saisir a: ");
        scanf ("%d", &a);
     do
     {
        printf ("Saisir b: ");
        scanf ("%d", &b);
     } while (b==0);

     while(a>=b){
        a-=b;
        compte++;
     }
     printf ("Le quotient de la division est :%d \n",compte);

    return 0;
}

