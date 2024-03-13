/*On se propose de saisir N entiers différents entre 1 et 100 (N étant un entier naturel compris entre
10 et 50) puis afficher la plus longue séquence croissante tout en précisant la position du premier nombre de
cette séquence.*/


#include <stdio.h>
int main (){

int N, i, num, prev_num, start_index, max_length, current_length;
    
    // Saisie de N
    printf("Entrez le nombre d'entiers (N) entre 10 et 50 : ");
    scanf("%d", &N);
    
    // Vérification de la contrainte sur N
    if(N < 10 || N > 50) {
        printf("N doit être un entier naturel compris entre 10 et 50.\n");
        return 1; // Sortie du programme avec un code d'erreur
    }
    
    // Initialisation des variables
    max_length = 0;
    current_length = 1;
    start_index = 0;
    
    // Saisie du premier nombre
    printf("Entrez l'entier numéro 1 : ");
    scanf("%d", &prev_num);
    
    for(i = 2; i <= N; i++) {
        // Saisie du prochain nombre
        printf("Entrez l'entier numéro %d : ", i);
        scanf("%d", &num);
        
        // Vérification si la séquence est croissante
        if(num > prev_num) {
            current_length++;
        } else {
            // Mettre à jour la longueur maximale et l'index de début de la séquence
            if(current_length > max_length) {
                max_length = current_length;
                start_index = i - max_length;
            }
            // Réinitialiser la longueur courante
            current_length = 1;
        }
        
        // Mettre à jour le nombre précédent
        prev_num = num;
    }
    
    // Vérification si la dernière séquence est la plus longue
    if(current_length > max_length) {
        max_length = current_length;
        start_index = N - max_length + 1;
    }
    
    // Affichage des résultats
    printf("La plus longue séquence croissante est de longueur %d.\n", max_length);
    printf("Elle débute à l'entier numéro %d.\n", start_index);

    
    return 0;
}
//A revoir