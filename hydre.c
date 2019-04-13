#include <stdio.h>

// Hydre de Lerne : Calculer le nombre de coup d'epee neccessaire pour tuer l'Hydre. 
// A chaque coup : nombre de tete/2
// Si il y a un nombre impair de tete : nb de tete*3 +1
// Si il n'y a plus qu'un tete : le dernier coup l'abat. 

//Predeclaration fonctions
int combat(int);

//Declaration des variables 
int tete=15;


int main()
{
    printf("Hercule, sous l'ordre de Eurysthe, est en route pour realiser son deuxieme travail \n");
    printf("Arrive sur place, il tombe sur L'hydre a %d tetes !\n",tete);
    int coup;
    coup = combat(tete);
    printf("Il lui aura fallu %d coups pour mener a bien sa mission, GG Hercule \n",coup);
    return 0;
}

//Fonctions
int combat(int nbtete)
{
    int nbcoup;
    nbcoup = 0;
    while (nbtete > 1)
 {
        printf("L'hydre a %d tetes\n",nbtete);
        nbtete = nbtete/2;        
        nbcoup ++;
        printf("Coup n%d\n",nbcoup);
        

        if (((nbtete % 2) == 1) && (nbtete!=1))
            nbtete = nbtete * 3 + 1;
            
}
nbcoup ++;
return nbcoup;
}

