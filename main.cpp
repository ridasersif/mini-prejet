#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int choix,i,x=0,m=0,mis=0;
    char book[100];
    char adresse[200];
    char rech[200];

    printf ("choisissez parmi les option suivantes :\n");
     //***********************************************
     go:
    printf("\n********les chpoix*******\n");
    printf("1. Ajouter un livre au stock.\n");
    printf("2. Afficher tous les livres disponibles.\n");
    printf("3. Rechercher un livre par son titre.  \n");
    printf("4. Mettre a jour la quantité d'un livre.  \n");
    printf("5. Supprimer un livre du stck..\n");
    printf("6. Afficher le nombre total de livres en stock.\n");
    //*********************************************
    printf("entrez votre choix : ");
    scanf("%d",&choix);
    char titre[100][20];
    char auteur[100][20];
    float prix[100];
    int quantite[100];
    {
        switch(choix){

        case 1 : printf("donnez les information suivent:\n");
                 printf("\nTitre du livre %d :",x+1);
                 scanf("%s",&titre[x]);
                 printf("\nAuteur du livre %d :",x+1);
                 scanf("%s",&auteur[x]);
                 printf("\nPrix du livre %d :",x+1);
                 scanf("%f",&prix[x]);
                 printf("\nQuantite en stock du livre %d :",x+1);
                 scanf("%d",&quantite[x]);
                 x++;
                 goto go;

        break;
        case 2 : printf("les Livres Disponibles est :\n");
                for(int i=0;i<x;i++)
                {   printf("\n---------------------------------\n");
                    printf("\n%s",titre[i]);
                    printf("\n%s",auteur[i]);
                    printf("\n%.2f",prix[i]);
                    printf("\n%d",quantite[i]);

                }
                 goto go;
        break;
        printf("\n*********************************************************\n");
        case 3 : printf ("entrez le titer et l'auteur de liver que vous recherchez :\n");
                 printf ("titer : ");
                 scanf ("%s",adresse);
                 printf ("\nauteur : ",rech);
                 scanf ("%s",rech);

                 for(int i=0;i<x;i++)
                 {
                    if(strcmp(adresse,titre[i])==0 && strcmp(rech,auteur[i])==0)
                     {
                    printf("\nle prix est : %.2f",prix[i]);
                    printf("\nla quantite est : %d",quantite[i]);
                    m++;
                    break;
                     }
                 }
                 if(m==0) printf("\n==> Ce liver \" %s \" n'est pas disponible pur le moment",adresse);
                 goto go;
          break;
        case 4 : printf("\n*********************************************************\n");
                 printf("entrez le titer de liver amise_ajour");
                 printf ("titer : ");
                 scanf ("%s",book);

                 for(int i=0;i<x;i++);
                 {
                     if(strcmp(book,titre[i])==0)
                     {
                          printf("==> ");
                         printf("entrez la nouvelle quantete\n");
                         printf("la quontite de la liver \"%s\" est : ",book);
                          printf("==> ");
                         scanf("%d",&quantite[i]);
                         printf("\nstock est mis a jour");
                         mis++;
                     }
                 }
                 if (mis==0) printf("Ce liver \" %s \" n'est pas disponible dans le stock .",book);
        }
    }

    return 0;
}
