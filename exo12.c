/*Écrire un programme qui permet de saisir un nombre entier positif, le programme détermine et
affiche si le nombre est parfait ou pas.*/


#include <stdio.h>
int main (){

int nombre, sommeDiviseurs = 0;
    
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &nombre);
    
    // Vérification si le nombre est positif
    if (nombre <= 0) {
        printf("Le nombre saisi n'est pas un nombre entier positif.\n");
        return 0;
    }
    
    // Calcul de la somme des diviseurs du nombre
    for (int i = 1; i < nombre; i++) {
        if (nombre % i == 0) {
            sommeDiviseurs += i;
        }
    }
    
    // Vérification si le nombre est parfait ou non
    if (sommeDiviseurs == nombre) {
        printf("%d est un nombre parfait.\n", nombre);
    } else {
        printf("%d n'est pas un nombre parfait.\n", nombre);
    }
    
    return 0;
}