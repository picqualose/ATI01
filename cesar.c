#include <stdio.h>
// Cryptographie de cesar = decaler le message de n lettre

// Predeclaration des fonctions
int calcule(char[]);
void decale(char[]);

// Declaration des Variables
char msg[255] = "Je suis un message trop bien ZBEUB <3";

// MAIN

int main()
{
    printf("Psssst le message est : \" %s \n \"", msg);
    decale(msg);
    printf("Le message code est :\" %s \n\"", msg);

    return 0;
}

// Fonctions


//Calculer nombre de valeur dans le tableau
int calcule(char msg[])
{
    int i = 0;
    while (msg[i] != '\0') {
	i++;
    }
    return i;
}

//Decaler les valeurs 
void decale(char msg[])
{
    int n = 42;
    int i = 0;
    for (i = 0; i < calcule(msg); i++) {
	// Si c'est une minuscule 
	if ('a' <= msg[i] && msg[i] <= 'z')
	    msg[i] = 'a' + ((msg[i] - 'a' + n) % 26);
	else
	    // Si c'est une majuscule 
	if ('A' <= msg[i] && msg[i] <= 'Z')
	    msg[i] = 'A' + ((msg[i] - 'A') + n) % 26;
	else
	    //  Si c'est un chiffre
	if ('0' <= msg[i] && msg[i] <= '9')
	    msg[i] = '0' + ((msg[i] - '0') + n) % 10;
	else
	    // Si c'est un espace
	if (msg[i] == ' ')
	    msg[i] = '_';
	else
	    //Si c'est un tout autre caractere         
	    msg[i] = '?';

    }
}
