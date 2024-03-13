#include <stdio.h>
int main()
{

    int numeromenu, note, bnenote, max, min, min1=20, min2=20, N, somme=0, nbrnote=0, choixmenu4, max1=0, max2=0;
    float moy;
    char reponse;
    do
    {
        puts("**** Veuillez faire un choix valide ****\n");
        puts("    1 afficher min et max d'une serie note");
        puts("    2 afficher les deux notes les plus petits");
        puts("    3 afficher la moyenne des notes");
        puts("    4 afficher les deux notes les plus grandes");
        puts("    5 quitter ");

        scanf("%d", &numeromenu);
        if (numeromenu < 1 && numeromenu > 5){
            printf("Le numéro n'existe pas dans le menu");
        }


        if (numeromenu == 1){

            max = 0; min = 20;
            do{
                do{
                    printf("Saisir une note entre 0 et 20: ");
                    scanf("%d", &note);

                    if (note < 0)
                        break;

                    if (note > 20){
                        printf("Saisir une note compris entre 0 et 20 ");
                    }

                } while (note > 20);

                if (note < 0)
                    break;

                if (note >= max ){
                    max = note;
                }
                if (note >= 0 && note <= min){
                    min = note;
                }
            } while (note >= 0);
            if (min==20 && max==0){
                printf("Pas de minimum, pas maximum");
            }
            else
                printf("Le minimum est: %d et le maximum est: %d\n", min, max);
        }

        else if(numeromenu==2){
           do
           {
            printf("Saisir un nombre positif: ");
            scanf("%d", &N);
           } while (N<=0);

           while (N>0)
           {
                printf("Saisir une note entre 0 et 20: ");
                scanf("%d", &note);

                if (note > 20){
                    printf("Saisir une note compris entre 0 et 20 \n");
                }
                else if (note>=0 && note<=20){
                    N--;
                    if (note< min1 && note < min2 ){
                        min1 = note;
                    }
                    if (note> min1 && note<= min2){
                        min2 = note;
                    }
                }
           }
           printf("Les deux notes les plus petites sont: %d et %d\n", min1, min2);
        }

        else if(numeromenu==3){
            do
            {
                do{
                    printf("Saisir une note entre 0 et 20: ");
                    scanf("%d", &note);

                } while (note<0 || note > 20);

                nbrnote+=1;
                somme+=note;
                moy=somme/nbrnote;
                do
                {
                    printf("Voulez-vous saisir une autre note, si Oui tapez 'O' et si Non tapez 'N' :");
                    scanf("%c", &reponse);
                } while (reponse!='O' && reponse!='N');

            } while (reponse!='N');
            printf("La moyenne des notes saisies est : %f", moy);
        }

        else if(numeromenu==4){
            do
            {
                puts("**** Veuillez faire un choix ****\n");
                puts("    1 afficher min et max d'une serie note");
                puts("    2 afficher les deux notes les plus petits");
                puts("    3 afficher la moyenne des notes");
                puts("    4 Retour ");

                scanf("%d", &choixmenu4);
                if (choixmenu4 < 1 && choixmenu4 > 4){
                    printf("Le numéro n'existe pas dans le menu");
                }

                if (choixmenu4 == 1){
                    do{
                        do{
                            printf("Saisir une note entre 0 et 20: ");
                            scanf("%d", &note);

                            if (note < 0)
                                break;

                            if (note > 20){
                                printf("Saisir une note compris entre 0 et 20 ");
                            }

                        } while (note > 20);

                        if (note < 0)
                            break;

                        if (note> max1 && note > max2 ){
                            max1 = note;
                        }
                        if (note< max1 && note>= max2){
                            max2 = note;
                        }

                    } while (note >= 0);
                        printf("Les deux notes les plus grandes sont: %d et %d\n", max1, max2);
                }
                
                else if(choixmenu4==2){
                    do
                    {
                        printf("Saisir un nombre positif: ");
                        scanf("%d", &N);
                    } while (N<=0);

                    while (N>0)
                    {
                            printf("Saisir une note entre 0 et 20: ");
                            scanf("%d", &note);

                            if (note > 20){
                                printf("Saisir une note compris entre 0 et 20 \n");
                            }
                            else if (note>=0 && note<=20){
                                N--;
                                 if (note> max1 && note > max2 ){
                                    max1 = note;
                                }
                                if (note< max1 && note>= max2){
                                    max2 = note;
                                }
                            }
                    }
                    printf("Les deux notes les plus grandes sont: %d et %d\n", max1, max2);
                }

                else if(choixmenu4==3){
                    do
                    {
                        do{
                            printf("Saisir une note entre 0 et 20: ");
                            scanf("%d", &note);

                        } while (note<0 || note > 20);

                        if (note> max1 && note > max2 ){
                            max1 = note;
                        }
                        if (note< max1 && note>= max2){
                            max2 = note;
                        }
                        do
                        {
                            printf("Voulez-vous saisir une autre note, si Oui tapez 'O' et si Non tapez 'N' :");
                            scanf("%c", &reponse);
                        } while (reponse!='O' && reponse!='N');

                    } while (reponse!='N');
                     printf("Les deux notes les plus grandes sont: %d et %d\n", max1, max2);
                }


                else if(choixmenu4==4) break;

            } while (choixmenu4!=4);
            
        }


        else if (numeromenu==5) break;
        
    } while (numeromenu!=5);

    

    return 0;
}
