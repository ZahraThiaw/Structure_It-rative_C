#include <stdio.h>
#include <string.h>

int main()
{
    int choix;
    char numero[20];
    int saisiValide=0;
   do
   {
   printf("******Bienvenue dans notre menu de téléphone******\n");
   printf("        1-Téléphone fixe\n");
   printf("        2-Téléphone portable\n");
   printf("        3-Quitter\n");
   puts("Choisir une option\n");
   scanf("%d", &choix);


   if (choix==1)
   {
    do
    {
        printf("Entrez un numéro de téléphone fixe:\n");
        scanf("%s", numero);

        // Vérifie la longueur du numéro, les deux premiers chiffres du numéro, les espaces dans le numéro
             if (strlen(numero) == 9 && strncmp(numero, "33", 2) == 0 )
                {
                // Vérifie si tous les caractères sont des chiffres
                int numerovalide = 1;
                for (int i = 0; numero[i] != '\0'; i++) {
                    if (numero[i] < '0' || numero[i] > '9') {
                        numerovalide = 0; 
                        break;
                    }
                }

                if (numerovalide){
                    saisiValide=1;
                printf("Numero de telephone fixe valide.\n");
                }else {
                    printf("Numero de telephone fixe invalide.\n");
                }
                    
                 }
             else
                 printf("Numero de telephone fixe invalide.\n");

    } while (!saisiValide);
    

    printf("Le numéro de téléphone fixe est : %s\n", numero);
    
    }

   else if (choix==2)
   {
    int estNumero=0;
    do
    {
        printf("Entrez un numero de telephone portable : ");
            scanf("%s", numero);


            // Vérifie la longueur du numéro, s'il commence par "+221" ou "00", s'il commence par un des préfixes suivants : 77, 76, 78, 70 et s'il ne contient pas d'espace
            if (strlen(numero) == 19 && (strncmp(numero, "(+221)", 6)  == 0 || strncmp(numero, "00", 2) == 0) && !strchr(numero, ' ') && estNumero==1)
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

    } while (strlen(numero) != 19 || (strncmp(numero, "+221", 4) != 0 && strncmp(numero, "00", 2) != 0)|| !strchr(numero, ' ') || estNumero);
   }

   } while (choix!=3);
   

    return 0;
}
