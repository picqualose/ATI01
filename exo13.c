#include <stdio.h> 
//Exercice 13 : Pile
            
//CREATION DE LA STRUCTURE
typedef struct
{
    //valeurs dans le tableau
    int val[100];
    //derniere case vide 
    int pos;
}pile_s;

//CREATION DES FONCTIONS 

//Affichage de la pile 

void affiche(pile_s P){
    int i;
    for (i = P.pos-1; i > -1; i--){
        printf("|%d|\n", P.val[i]);
}
printf("\n");
}

//Ajoute d'une valeur dans la pile 
void push(pile_s* P, int valeur_entree){
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
void nombre_elem(pile_s P){
    printf("Il y a %d elements dans la pile\n",P.pos);
}

//Afficher l'element le pluis haut de la pile 
void plus_haut(pile_s P){
    printf("L'element de la pile le plus haut est %d \n",P.val[P.pos-1]);     
}

//Effacer l'element le plus haut de la pile 
void efface_dernier(pile_s* P){
    P->pos--;
}

//Echanger les deux elements les plus hauts de la pile 
void echange(pile_s* P){
    int c = P->val[P->pos-1];
    P->val[P->pos-1] = P->val[P->pos-2];
    P->val[P->pos-2] = c;
}

//Doubler l'element le plus haut de la pile
void doubler(pile_s* P){
    int val= P->val[P->pos-1];
    push(P,val); 
}

//Vider la pile 
void vider(pile_s* P){
    P->pos=0;
}

//Ajouter plusieurs valeurs
void new_valeur(pile_s* P){
 int stop=0;
 int val;
 int num = 1;
 while(stop!=1){ 
    printf("Quelle est la valeur %d ? \n",num);
    scanf("%d",&val);
    push(P,val);

    printf("0 : Ajouter une nouvelle Valeur\n");
    printf("1 : Revenir au Menu\n");
    scanf("%d",&stop);
    num ++;
 }
}



///////////////////////////////////////////////////DEBUT MAIN//////////////////////////////////////////////////////////////////////
int main()
{ 
    pile_s pile;   //Creation de la pile  
    pile.pos = 0;  //Mise a zero de la derniere position 
    
  // MENU
    

    int choix;
    
    while(choix!=9){
    printf("Bienvenue dans le menu ! Vous allez ici choisir ce que vous voulez faire :) \n");
    printf("1 : Ajouter des nouvelles valeurs\n");
    printf("2 : Afficher la pile\n");
    printf("3 : Connaitre l'etat de la pile\n");
    printf("4 : Nombre d'element(s) dans la pile\n");
    printf("5 : Afficher l'element le plus haut\n");
    printf("6 : Effacer l'element le plus haut\n");
    printf("7 : Echanger les deux element les plus hauts\n");
    printf("8 : Vider la pile\n"); 
    printf("9 : Sortir du menu\n");
    
    scanf("%d",&choix);
   printf("\n\n"); 
      switch(choix){
        case 1:
            {
                new_valeur(&pile); 
            }
            break;
        case 2:
            {
                affiche (pile);
            }

            break;
        case 3:
            {
                int verif;
                verif = vide(pile);
                if (verif==1)
                   printf("La pile est vide\n");
                else 
                   printf("La pile est pleine\n");
            }

            break;
        case 4:
            
            {
               nombre_elem(pile);
            }

            break;
        case 5 :
            {
                plus_haut(pile);
            }

            break;
        case 6 :
            {
                printf("On efface le dernier element :\n");
                efface_dernier(&pile);
                affiche(pile);
            }

            break;
        case 7 :
            {
                     
                printf("Echange des deux premieres valeurs :\n");
                echange(&pile);
            }
        
            break;
       case 8 : 
            {
                printf("On double l'element 1\n");
                doubler(&pile);
                affiche(pile);
            }
       
            break;
       case 9 : 
            {
                vider(&pile);
            }
                
            break;
      } 

   printf("\n \n \n"); 
}
  
}
//FIN MAIN
