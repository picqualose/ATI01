#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Exo 11 : Bubble Sort

int calcule(int[]);
void affiche_tableau(int[],int);
void random_tableau(int[],int);
void bubule(int[],int);
//////

int main(){

srand(time(NULL)); //Genere une graine aleatoire    
int* tableau;
int taille_tableau = 0;
printf("Veuillez renseigner la taille du tableau \n");
scanf("%d",&taille_tableau); 
printf("Le tableau sera de : %d \n",taille_tableau);

tableau = malloc(sizeof(int)*taille_tableau);

random_tableau(tableau,taille_tableau);
affiche_tableau(tableau,taille_tableau);
bubule(tableau,taille_tableau);

printf("Le tableau trie est :\n");

affiche_tableau(tableau, taille_tableau);


free(tableau);
return 0;
}


///////

void bubule(int tab[], int taille)
{
    int i, j, change;
    for(j=taille-1; j >=0 ; j--){
        for(i=0; i<j; i++){
            if(tab[i]>tab[i+1]){
                change=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=change;
            }
        }
    }
}


void random_tableau(int tableau[],int taille)
{
    int i;
    for (i = 0; i < taille; i++)
    {
        tableau[i] = rand()%6587;
    }
}



void affiche_tableau(int tableau[], int taille_tableau)
{ 
    int i;
    for (i = 0; i < taille_tableau; i++) {
    printf("%d | ",tableau[i]);
    }

    printf("\n");
}

int calcule(int tableau[])
{
    int i = 0;

    while (tableau[i] != '\0') {
    i++;
    }
    return i;
}
