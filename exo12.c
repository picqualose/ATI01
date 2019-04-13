#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Exo 12 : Quick Sort 

void affiche_tableau(int[],int);
void random_tableau(int[],int);
void swap(int*,int*);
int pivot(int[],int,int);
void quicksort(int[],int,int);

////////MAIN////////
int main(){

srand(time(NULL)); //Genere une graine aleatoire   
//Declaration du tableau et de sa taille 
int* tableau;
int taille_tableau = 0;
printf("Veuillez renseigner la taille du tableau \n");
scanf("%d",&taille_tableau); 
printf("Le tableau sera de : %d \n",taille_tableau);
tableau = malloc(sizeof(int)*taille_tableau);

//Remplissage du tableau 
random_tableau(tableau,taille_tableau);
affiche_tableau(tableau,taille_tableau);
printf("Le tableau trie est :\n");

// Tri du tableau 

quicksort(tableau, 0, taille_tableau-1);
affiche_tableau(tableau, taille_tableau);


free(tableau);
return 0;
}
/////FIN MAIN/////



//////FONCTIONS//////

// fonction pour echanger deux valeurs 
void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
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

int pivot(int tableau[], int debut, int fin)
{
    int pivot=tableau[fin];
    int i = (debut-1);

    for (int j=debut;j<=fin-1;j++)
    {
        if(tableau[j]<=pivot)
        {
            i++;
            swap(&tableau[i],&tableau[j]);
           }
    }
    swap(&tableau[i+1], &tableau[fin]);
    return (i + 1);
}

 

void quicksort(int tableau[],int debut, int fin)
{ 
    if(debut>=fin)
        return ;
    else
    {
    int p = pivot(tableau,debut,fin);
    quicksort(tableau,debut, p-1);
    quicksort(tableau, p+1, fin);
    }
} 

