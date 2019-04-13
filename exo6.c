#include <stdio.h>

// Exo 5

int calcule(char[]);		/* predeclaration */
void remplace_esp(char[]);
void remplace_carac(char[], char, char);
void min_maj(char[]);
void mirroir(char[]);
void palindrome(char[]);
int compare(char[], char[]);

char msg[255] = "kayak";

int main()
{

    palindrome(msg);



    return 0;
}

//Exo 6 : tester si la chaine de caractere est un palindrome

int compare(char msg[], char msg2[])
{
    int i;
    int c;
    c = 1;
    for (i = 0; i < calcule(msg); i++)
	if (msg[i] != msg2[i])
	    c = 0;
    return c;
}

void palindrome(char msg[])
{

    char temp[255];
    int i;
    for (i = 0; i < calcule(msg); i++)
	temp[i] = msg[i];
    mirroir(temp);

    if (compare(msg, temp)) {

	printf("\'%s\' est un palindrome \n", msg);
    } else {
	printf("\'%s\' n'est pas un palindrome \n", msg);
    }
}



//Exo 5 : retourner la chaine en mirroir

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
