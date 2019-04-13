#include <stdio.h>

// Ecrire une fonction permettant de "retourner" (mirroir)
// une chaine de caractere transmise en argument

int calcule(char[]);		/* predeclaration */
void remplace_esp(char[]);
void remplace_carac(char[], char, char);
void min_maj(char[]);
void mirroir(char[]);
char msg[255] = "Eh, t'arrives a lire maintenant ?";

int main()
{
    printf("Le message est : \" %s \" \n", msg);
    mirroir(msg);
    printf("Son mirroir est :\" %s \" \n", msg);


    return 0;
}

//Exo 4 : retourner la chaine en mirroir

void mirroir(char msg[])
{
    int i;
    char msg2[255];
    for (i = 0; i < calcule(msg); i++) {
	msg2[i] = msg[calcule(msg) - i - 1];
    }

    for (i = 0; i < calcule(msg); i++)
	msg[i] = msg2[i];
}


//Exo 4 : transformer min en maj

void min_maj(char msg[])
{
    int i;
    for (i = 0; i < calcule(msg); i++) {
	if (msg[i] >= 'a' && msg[i] <= 'z')
	    msg[i] = msg[i] + 'A' - 'a';
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
