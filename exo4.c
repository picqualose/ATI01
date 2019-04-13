#include <stdio.h>

// Ecrire une fonction permettant de transformer toutes les min en maj 

int calcule(char[]);		/* predeclaration */
void remplace_esp(char[]);
void remplace_carac(char[], char, char);
void min_maj(char[]);

char msg[255] = "Non je ne parle pas fort";

int main()
{
    printf("Le message est : \" %s \" \n", msg);
    min_maj(msg);
    printf("Avec des majuscules :\" %s \" \n", msg);


    return 0;
}

//Exo 4 : transformer min en maj

void min_maj(char msg[])
{
    int i;
    for (i = 0; i < calcule(msg); i++) {
	if (msg[i] >= 'a' && msg[i] <= 'z')
	msg[i] = msg[i]+'A'-'a';
    }
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
