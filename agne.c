 if (choix == 1)
    {
        int note = 0, min = 0, max = 0;

        do
        {
            do
            {
                puts("veuillez saisir une note comprise entre 0 et 20: ");
                scanf("%d", &note);

                if (note < 0)
                    break;
            } while (note > 20);

            if (note >= max)
            {
                max = note;
            }

            if (note <= min)
            {
                min = note;
            }

        } while (note >= 0);

        if(min > 0 && max > 0)
            printf("la note minimale est : %d et max est : %d\n", min, max);
    }
    else if (choix == 2)
    {
        int nbr, note, min1 = 20, min2 = 20;

        puts("combien de notes voulez vous saisir : ");
        scanf("%d", &nbr);

        for (int i = 0; i < nbr; i++)
        {
            do
            {
                puts("veuillez saisir une note comprise entre 0 et 20: ");
                scanf("%d", &note);
            } while (note < 0 || note >20 );

            if (note < min1 && note < min2)
            {
                min1 = note;
            }
            if (note > min1 && note <= min2)
            {
                min2 = note;
            }
        }

        printf("les deux notes les plus petites sont : %d et %d \n",min1,min2);
    }
    else if (choix == 3)
    {
        char c;
        int snote = 0;
        float note, moy = 0;

        do
        {
            do
            {

                puts("saisissez une note comprise entre 0 et 20 : ");
                scanf("%f", &note);
            } while (note < 0 || note > 20);

            snote += 1;
            moy += note;

            do
            {
                puts("pour continuer taper o pour arreter taper n \n");
                scanf(" %c", &c);
                printf("%d",(c != 'o'));
            } while (c != 'o' && c != 'n');

        } while (c != 'n');

        moy /= snote;
        printf("la somme des notes est : %f\n", moy);
    }
    else if (choix == 4)
    {
        int r, note, max1, max2;

        do
        {

            puts("*** comment voulez vous arreter de saisir : ****");
            puts("         1 en saisissant une note negatif ");
            puts("         2 en se basant sur le nombre de note a saisir ");
            puts("         3 en saisissant n ");

            scanf("%d", &r);
        } while (r < 1 || r > 3);

        if (r == 1)
        {

            int note, max = 0, max1 = 0;

            do
            {
                do
                {
                    puts("veuillez saisir une note comprise entre 0 et 20: ");
                    scanf("%d", &note);

                    if (note < 0)
                        break;
                } while (note > 20);

                if (note > max && note > max1)
                {
                    max1 = note;
                }
                if (note > max && note < max1)
                {
                    max = note;
                }

            } while (note >= 0);

            if((max && max2) > 0)
            printf("les deux notes les plus grandes sont : %d et %d\n", max, max1);
        }
        else if (r == 2)
        {
            int nbr, note, max = 0, max1 = 0;

            puts("combien de notes voulez vous saisir : ");
            scanf("%d", &nbr);

            for (int i = 0; i < nbr; i++)
            {
                do
                {
                    puts("veuillez saisir une note comprise entre 0 et 20: ");
                    scanf("%d", &note);
                } while (note < 0 || note > 20);

                if (note > max && note > max1)
                {
                    max1 = note;
                }
                if (note > max && note < max1)
                {
                    max = note;
                }
            }
            printf("les deux notes les plus grandes sont : %d et %d\n", max, max1);
        }
        else
        {

            char c;
            int max = 0, max1 = 0, note;

            do
            {
                do
                {
                    puts("saisissez une note comprise entre 0 et 20 : ");
                    scanf("%d", &note);
                } while (note < 0 || note > 20);

                if (note > max && note > max1)
                {
                    max1 = note;
                }
                if (note > max && note < max1)
                {
                    max = note;
                }

                do
                {
                    puts("pour continuer taper o pour arreter taper n \n");
                    scanf(" %c", &c);
                } while (c != 'o' && c != 'n');

            } while (c == 'o');

            printf("les deux notes les plus grandes sont : %d et %d\n", max, max1);

        }
    }else{
        puts("**** a la prochaine <3 *****");
    }
