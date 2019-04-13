#include <stdio.h>

//Exo 9 : ecrire une fonction qui calcule la factorielle de n'importe quel nombre
int factorielle(int);

int main()
{
    int nb;
    nb = 8;
    int res;
    res = factorielle(nb);
    printf("La factorielle de %d est %d\n",nb,res);
return 0;
}

int factorielle(int nombre){
    int i;
    int result;
    result=1;
    for(i = 1; i <= nombre; i++)
        result=result*i;
return result;
}


