/*Un nombre est parfait s’il est égal à la somme de ses diviseurs stricts (différents de lui-même). Ainsi
par exemple, l’entier 6 est parfait car 6 = 1 + 2 + 3. Écrire un algorithme permettant de déterminer si un entier
naturel est un nombre parfait.*/


#include <stdio.h>

int main () {

int nbr, sds = 0;
printf ("Saisir un nombre : \n");
scanf ("%d", &nbr);

for ( int i=1; i<= nbr/2; i++){
    if (nbr % i == 0){
        sds += i;
    }
}
if (sds == nbr) {
        printf("%d est un nombre parfait.\n", nbr);
    } else {
        printf("%d n'est pas un nombre parfait.\n", nbr);
    }
    
    return 0;
}