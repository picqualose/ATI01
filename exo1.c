#include <stdio.h> 

// Ecrire une fonction permettant de calculer la longueur
// d'une chaine de caractere (ainsi que le main permettant de la tester) 

int calcule (char[]); /* predeclaration */ 

char msg[255]="coucou";

int calcule(char msg[]){
    int i=0;

    while(msg[i] != '\0'){
        i++;
       }
return i;
}

int main(){
    printf("Le message est %s \n", msg);
    printf("Sa longueur est de %d \n", calcule(msg));

return 0;
}

