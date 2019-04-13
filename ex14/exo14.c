#include <stdio.h>
#include <stdlib.h> 
#include "pile.h"


////MAIN////

int main()
{

    //Creation des piles de verification 
    pile_s pparenthese;
    pile_s pcrochet;
    pile_s paccolade;
    //Mise a zero de la position du dernier caractere
    pparenthese.pos = 0;
    pcrochet.pos = 0;
    paccolade.pos = 0;

    //Declaration du fichier a verifier
    FILE* fichier = NULL;
    fichier = fopen("test.txt", "r");
    
    //Mise a zero de la variable de lecture des caracteres 
    char caractereA = 0;

    
    //Lecture des caracteres un par un 
    if (fichier != NULL) 
    {
        int erreur = 0;
       do 
       {
            caractereA= fgetc(fichier);
          
           ///Affiche le caractere lu
           

            //Mise dans la pile correspondante 
            if (caractereA == '(')                         
                push(&pparenthese, caractereA);
                         
            if (caractereA == '[')            
                push(&pcrochet, caractereA);
            
            if (caractereA == '{')
                push(&paccolade, caractereA);

            char dernier;
            //Verification correspondance
            if (caractereA == ')'){
               dernier = pop(&pparenthese);
                              
                if ((caractereA == ')') && (dernier == '('))
                    printf("ok\n");                                     
                               
            }

            if (caractereA == ']'){
               dernier = pop(&pcrochet);

                if ((caractereA == ']') && (dernier == '['))
                    printf("ok\n");
                            
         
            }

                if (caractereA == '}'){                        
                  dernier = pop(&paccolade);
                if ((caractereA == '}') && (dernier == '{'))
                    printf("ok\n");                                                
                  }
          

          } while (caractereA != EOF);
          fclose(fichier); 
       //On lit le nombre d'erreur(s) en fonction du nombre d'elements restants dans les piles
          erreur = nombre_elem(pparenthese) + nombre_elem(pcrochet) + nombre_elem(paccolade);
          printf("Il y a %d erreurs\n",erreur);
    }
    else
    {
        printf("Le fichier n'existe pas\n");
         
    }

 
    return 0;
}
    
