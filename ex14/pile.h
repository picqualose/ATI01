#ifndef Pile_H
#define Pile_H

typedef struct
{
    //valeur dans le tableau
    char val[100];
    //derniere case vide 
    int pos;
}pile_s;
void affiche(pile_s P);
void push(pile_s* P, char valeur_entree);
int nombre_elem(pile_s P);
char pop(pile_s* P);

#endif
