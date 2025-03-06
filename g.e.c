#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Me 30 /*max etudiant *_*/
#define MN 5  /*max note :) */

int main(){

    char list_etudiant[100][100];
    float note[Me][MN+1];
    int c = 0 , l = 0,n;
    char nom[Me];
    float moy[Me];
    float moyenne;
    float sum=0;
    int choix;
    int NumEtudiant;

    do{
        printf("\n========= MENU =========\n");
        printf("1. Ajouter un étudiant\n");
        printf("2. Afficher la liste des étudiants\n");
        printf("3. Afficher le meilleur étudiant\n");
        printf("4. Rechercher un étudiant par nom\n");
        printf("5. Modifier un étudiant\n");
        printf("6. Trier les étudiants par moyenne\n");
        printf("7. Supprimer un étudiant\n");
        printf("8. Afficher les statistiques\n");
        printf("9. Filtrer les étudiants\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        

 
        switch (choix){
            case 0:
                printf("Au revoir\n");
                break;
            case 1:
                printf("entre le nombre d'etudiants:");
                scanf("%d",&NumEtudiant);
                getchar();
                for(int i=0 ; i<NumEtudiant ; i++){
                    printf("entre le nom de l'etudiant %d:",i+1);
                    getchar();
                    fgets(nom, Me, stdin);
                    nom[strcspn(nom, " \n")] = '\0';
                    strcpy(list_etudiant[l],nom);
                    l++;
                    for(int j=0 ; j<Me ; j++){
                        for (n = 0; n<MN ; n++)
                        {
                            printf("entre la note %d de l'etudiant %d:",j+1,i+1);
                            scanf("%f",&note[j][n]);
                            sum += note[j][n];
                        }
                        note[j][n+1] = sum/MN;
                        sum = 0;
                    }
                    }
                break;
            case 2:
                
                for (int i = 0; i < l - 1; i++) {
                    for (int j = i + 1; j < l; j++){
                        if (strcmp(list_etudiant[i], list_etudiant[j]) > 0){
                            char t[Me];
                            strcpy(t, list_etudiant[i]);
                            strcpy(list_etudiant[i], list_etudiant[j]);
                            strcpy(list_etudiant[j], t);
                        }
                    }
                }
                printf("la liste des etudiants est:\n");
                for(int i=0 ; i<l ; i++){
                    printf("l'etudiant %d est %s\n",i+1,list_etudiant[i]);
                    for(int j=0 ; j<MN ; j++){
                        printf("la note %d est %f\n",j+1,note[j]);
                    }
                    printf("sa moyenne est %f\n",moy[i]);
                }
                break;
            case 3:
                for(int i=0 ; i<l ; i++){
                    if(moy[i]>moyenne){
                        moyenne = moy[i];
                        c = i;
                    }
                }
                printf("le meilleur etudiant est %s\n",list_etudiant[c]);
                break;
            default:
                printf("Choix invalide, veuillez réessayer.\n");
                
                           
        }
       
    }while(choix != 0);
}                  

