/*Écrire un programme qui permet de tester si deux nombres sont AMIS ou pas. Deux nombres M et
N sont amis si la somme des diviseurs de N excepté 1 et lui-même est égale à M et la somme des diviseurs de
M excepté 1 et lui-même est égale à N.*/


#include <stdio.h>
int main (){

int nombre1, nombre2, somme1=0, somme2=0;

printf ("Saisir un nombre 1: \n");
scanf ("%d", &nombre1);
printf ("Saisir un nombre 2: \n");
scanf ("%d", &nombre2);

for ( int i=2; i<= nombre1/2; i++){
    if (nombre1 % i == 0){
        somme1 += i;
    }
}
for ( int i=2; i<= nombre2/2; i++){
    if (nombre2 % i == 0){
        somme2 += i;
    }
}
if (somme1 == nombre2 && somme2 == nombre1){
    printf("%d et %d sont parfaits", nombre1, nombre2);
}else {
    printf("%d et %d ne sont pas parfaits", nombre1, nombre2);
}

    
    return 0;
}