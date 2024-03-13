/*Écrire un algorithme mettant en œuvre le jeu suivant entre deux joueurs : Le premier utilisateur
saisit un entier que le second doit deviner. Pour cela, il a le droit à autant de tentatives qu'il le souhaite. A
chaque échec, le programme lui indique si l'entier est plus grand ou plus petit que sa proposition. Un score est
affiché lorsque l'entier est trouvé.*/

#include <stdio.h>
int main (){

    int nbrsecret, nbrdevine, nbrtentative=0;
    // Demander au premier utilisateur de saisir un entier
    printf("Premier utilisateur, veuillez saisir un entier : ");
    scanf("%d", &nbrsecret);

    // Boucle jusqu'à ce que le nombre soit deviné
    do {
        // Demander au second utilisateur de deviner le nombre
        printf("Second utilisateur, deviner le nombre : ");
        scanf("%d", &nbrdevine);
        nbrtentative++;

        // Vérifier si la devinette est correcte
        if (nbrdevine == nbrsecret) {
            printf("Bravo ! Vous avez deviné le nombre en %d tentatives.\n", nbrtentative);
        } else if (nbrdevine < nbrsecret) {
            printf("Le nombre est plus grand.\n");
        } else {
            printf("Le nombre est plus petit.\n");
        }
    } while (nbrdevine != nbrsecret);

    
    return 0;
}