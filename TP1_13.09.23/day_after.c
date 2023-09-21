#include <stdio.h>

int main() {
    int day1, mon1, year1, day2, mon2, year2; // Jour, mois et année du premier jour et du deuxième jour

    // Demande à l'utilisateur de saisir le jour
    do {
        printf("Entrez le nombre d'un jour : ");
        scanf("%02d", &day1);

        // Vérifie si les valeurs saisies sont valides selon le nombre des jours
    } while (day1 < 0 || day1 > 31);

    // Demande à l'utilisateur de saisir le mois
    do {
        printf("Entrez le nombre d'un mois : ");
        scanf("%02d", &mon1);

        // Vérifie si les valeurs saisies sont valides selon le nombre des mois
    } while (mon1 < 0 || mon1 > 12);

    // Demande à l'utilisateur de saisir l'année
    do {
        printf("Entrez le nombre d'une année : ");
        scanf("%d", &year1);

        // Vérifie si les valeurs saisies sont valides de l'année 1000 à 2023
    } while (year1 < 1000  || year1 > 2023);

    printf("La date que vous avez saisi est le %02d/%02d/%d \n", day1, mon1, year1); // Impression de la date de l'utilisateur

    year2 = year1 ; mon2 = mon1 ; day2 = day1 ; // Initialisation des nouvelles dates

    if ((mon1==12) && (day1==31)) // Cas de fin d'année
    {
        year2 = year1+1 ;
        mon2 = 1 ;
        day2 = 1 ;
        printf("Bienvenue à la nouvelle année. Le lendemain du %02d/%02d/%d est le %02d/%02d/%d \n", day1, mon1, year1, day2, mon2, year2);

    } else if (mon1==1 || mon1==3 || mon1==5 || mon1==7 || mon1==8 || mon1==10 || mon1==12) // Mois de 31 jours
    {
        if (day1==31)
        {
            mon2 = mon1+1 ;
            day2 = 1 ;
        } else
        {
            day2 = day1+1 ;
        }
    } else if (mon1==4 || mon1==6 || mon1==9 || mon1==11) // Mois de 30 jours
    {
        if (day1==30)
        {
            mon2 = mon1+1 ;
            day2 = 1 ;
        } else
        {
            day2 = day1+1 ;
        }
    } else if (mon2==2) // Février en prenant en compte les années bisextiles
        {
            if (((year1%4==0) && (year1%100!=0)) || (year1%400==0)) // Test de l'année bisextile
            {
                if (day1==29)
                {
                    day2 = 1 ;
                    mon2 = mon1+1 ;
                }
                else
                {
                    day2 = day1+1 ;
                }
            } else if (day1==28)
                {
                    day2 =1 ;
                    mon2 = mon1+1 ;
                }
                else
                {
                    day2 = day1+1 ;
                }
        }

    printf("Le lendemain est : %02d/%02d/%d \n",day2,mon2,year2) ; // Affichage du lendemain

    return 0;
}
