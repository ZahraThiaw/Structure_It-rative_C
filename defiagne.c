/**/

#include <stdio.h>
#include <string.h>

int main (){
    int choix, id, minid, maxid;
    int cpt=0;
    double pu, minpu, maxpu, qte, minqte, maxqte, montant, maxmontant;
    char nom [20], minnom[20], maxnom[20];
    char reponse;
    do
    {
        printf("*****Bienvenue dans le menu de produits*****\n");
        printf("        1- Afficher le plus petit produit\n");
        printf("        2- Afficher le produit dont le montant(pu*qte) est plus grand\n");
        printf("        3- Quitter\n");
        printf("Choisir une option\n");
        scanf("%d", &choix);


        if (choix==1){
            int cpt=0;
            do
            {
                do
                {
                   printf("Saisir un produit\n");
                   printf("Saisir l'id du produit\n");
                   scanf("%d", &id);
                } while (id<=0);
                
                do
                {
                    printf("Saisir le nom du produit\n");
                    scanf("%s", nom);                } while (nom=="");

                do
                {
                    printf("Saisir la quantité du produit\n");
                    scanf("%lf", &qte);
                } while (qte<=0);
                
                do
                {
                    printf("Saisir le prix unitaire du produit\n");
                    scanf("%lf", &pu);

                    if (pu>0){
                        if(cpt==0){
                            minid=id;
                           strcpy(minnom, nom);
                            minqte=qte;
                            minpu=pu;
                            cpt=1;
                        } else if(cpt==1){
                            if (pu<=minpu)
                            {
                                minpu=pu;
                                minid=id;
                                strcpy(minnom, nom);
                                minqte=qte;
                            }
                            
                        }
                    }
                    
                } while (pu<=0);

                do
                {
                    printf("Voulez-vous saisir un autre produit si Oui tapez 'O' et si Non tapez 'N' :\n");
                    scanf("%c", &reponse);
                } while (reponse!='O' && reponse!='N');
                
            } while (reponse!='N');

            printf("Le plus petit produit est le numéro %d du nom %s avec la quantité %lf et le prix unitaire de %lf\n", minid,minnom,minqte,minpu);
            
        }


        else if (choix==2){
            do
            {
                do
                {
                   printf("Saisir un produit\n");
                   printf("Saisir l'id du produit\n");
                   scanf("%d", &id);
                } while (id<=0);

                do
                {
                    printf("Saisir le nom du produit\n");
                    scanf("%s", nom);
                    if (nom=="")
                    {
                     puts("Le nom du produit est obligatoire, veuillez saisir le nom du produit\n");
                    }
                    
                } while (nom=="");
                do
                {
                    printf("Saisir la quantité du produit\n");
                    scanf("%lf", &qte);
                    pu==0;
                } while (qte==0);

                while (qte>0 && pu==0)
                {
                    printf("Saisir le prix unitaire du produit\n");
                    scanf("%lf", &pu);

                    if (pu>0 && qte>0){
                        if(cpt==0){
                            maxid=id;
                           strcpy(maxnom, nom);
                            maxqte=qte;
                            maxpu=pu;
                            maxmontant=montant;
                            cpt=1;
                        } else if(cpt==1){
                            if (montant>=maxmontant)
                            {
                                maxmontant=montant;
                                maxid=id;
                                strcpy(maxnom, nom);
                                maxqte=qte;
                                maxpu=pu;
                            }
                        }
                    }
                }

                     
                
            } while (qte>=0 && pu>=0);
            printf("Le plus grand montant est le numéro %d du nom %s avec la quantité %lf et le prix unitaire de %lf\n", maxid,maxnom,maxqte,maxpu);
        }
    } while (choix!=3);
    
    return 0;
}