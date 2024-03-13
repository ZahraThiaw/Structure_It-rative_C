#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){

    int choix;
    char numero[20];

    int estNumero;
    do
    {
        printf("Entrez un numero de telephone portable : ");
            scanf("%s", numero);


            // Vérifie la longueur du numéro, s'il commence par "+221" ou "00", s'il commence par un des préfixes suivants : 77, 76, 78, 70 et s'il ne contient pas d'espace
            if (strlen(numero) == 19 && (strncmp(numero, "(+221)", 6)  == 0 || strncmp(numero, "00", 2) == 0) && !strchr(numero, ' ') && estNumero)
                {
                    // Vérifie si tous les caractères sont des chiffres
                    estNumero = 1;
                    for (int i = 0; i < strlen(numero); i++) {
                        if (!isdigit(numero[i])) {
                            estNumero = 0;
                            break;
                        }
                    }
                    if (estNumero)
                    {
                        
                        printf("Numero de telephone portable valide.\n");
                    }else{
                        printf("Numero de telephone portable invalide.\n");
                    }
                    
            }else
                printf("Numero de telephone portable invalide.\n");

    } while (strlen(numero) != 19 || (strncmp(numero, "+221", 4) != 0 && strncmp(numero, "00", 2) != 0)|| !strchr("776780", numero[4]) || strchr(numero, ' ') || !estNumero);
    

    return 0;
}