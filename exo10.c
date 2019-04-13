#include <stdio.h>
//Exo 10 
int factorielle(int);
int main()
{
    int nb;
    nb=7;
    printf("On va faire la factorielle de %d\n",nb);
    int res;
    res=factorielle(nb);
    printf("Le resultat est : %d\n",res);
}

int factorielle(int nombre){
    if (nombre == 0)
        return 1;
    else
        return(nombre*factorielle(nombre-1));
}

