#include <stdio.h>

// Ecrire une fonction permettant de remplacer toutes les occurrences 
// d'un caractere par un autre caractere "_" (ainsi que le main permettant de la tester) 

int calcule(char[]);		/* predeclaration */
void remplace_esp(char[]);
void remplace_carac(char[], char, char);

char msg[255] = "je suis un panier de yoplait";

int main()
{
    printf("Le message est : \" %s \" \n", msg);
    remplace_carac(msg, 'e', 'i');
    printf("Le message sans espace est :\" %s \" \n", msg);


    return 0;
}

//Exo 3 : remplacer a par b 

void remplace_carac(char msg[], char carac_base, char carac_remplace)
{
    int i;
    for (i = 0; i < calcule(msg); i++) {
	if (msg[i] == carac_base) {
	    msg[i] = carac_remplace;
	}
    }
}



//Exo 2 : remplacer espaces par "_"

void remplace_esp(char msg[])
{
    int i = 0;

    for (i = 0; i < calcule(msg); i++) {
	if (msg[i] == ' ') {
	    msg[i] = '_';
	}
    }
}

//Exo 1 : calcul du nombre de caracteres

int calcule(char msg[])
{
    int i = 0;

    while (msg[i] != '\0') {
	i++;
    }
    return i;
}
