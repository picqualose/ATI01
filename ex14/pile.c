#include <stdio.h> 
//Reprise de l'exercice 13 et des fonctions crees pour l'exercice 14 
            
//CREATION DE LA STRUCTURE
/*typedef struct
{
    //valeurs dans le tableau
    char val[100];
    //derniere case vide 
    int pos;
}pile_s; */

//CREATION DES FONCTIONS 

//Affichage de la pile 

void affiche(pile_s P){
    int i;
    for (i = P.pos-1; i > -1; i--){
        printf("|%c|\n", P.val[i]);
}
printf("\n");
}

//Ajoute d'une valeur dans la pile 
void push(pile_s* P, char valeur_entree){
    P->val[P->pos] = valeur_entree;
    P->pos++;
}


//Vider la pile 
int vide(pile_s P){
    if(P.pos==0)
        return 1;
    else 
        return 0;
}

//Compte le nombre d'element
int nombre_elem(pile_s P){
    //printf("%d",P.pos);
    return P.pos;
}

//Afficher l'element le pluis haut de la pile 
void plus_haut(pile_s P){
    printf("L'element de la pile le plus haut est %c \n",P.val[P.pos-1]);     
}

//Effacer l'element le plus haut de la pile 
void efface_dernier(pile_s* P){
    P->pos--;

}


char pop(pile_s* P){
    char dernier = P->val[P->pos-1];
    P->pos--;
   // printf("%c",dernier);
    return dernier;
}

//Echanger les deux elements les plus hauts de la pile 
void echange(pile_s* P){
    char c = P->val[P->pos-1];
    P->val[P->pos-1] = P->val[P->pos-2];
    P->val[P->pos-2] = c;
}

//Doubler l'element le plus haut de la pile
void doubler(pile_s* P){
    char val= P->val[P->pos-1];
    push(P,val); 
}

//Vider la pile 
void vider(pile_s* P){
    P->pos=0;
}

//Ajouter plusieurs valeurs
void new_valeur(pile_s* P){
 int stop=0;
 char val;
 int num = 1;
 while(stop!=1){ 
    printf("Quelle est la valeur %d ? \n",num);
    scanf("%c",&val);
    push(P,val);

    printf("0 : Ajouter une nouvelle Valeur\n");
    printf("1 : Revenir au Menu\n");
    scanf("%d",&stop);
    num ++;
 }
}

