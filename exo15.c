/*Écrire un programme qui permet de saisir un entier positif N, le programme affiche les n premiers
nombre premiers*/

#include <stdio.h>
int main (){

int N;
    
    printf("Entrez un entier positif N : ");
    scanf("%d", &N);
    
    printf("Les %d premiers nombres premiers sont :\n", N);
    
    int nombre = 2;
    int compte = 0;
    
    while (compte < N) {
        int estPremier = 1;
        
        // Vérifie si le nombre est divisible par un autre nombre que 1 et lui-même
        for (int i = 2; i * i <= nombre; i++) {
            if (nombre % i == 0) {
                estPremier = 0;
                break;
            }
        }
        
        if (estPremier) {
            printf("%d ", nombre);
            compte++;
        }
        
        nombre++;
    }
    
    printf("\n");

    
    return 0;
}