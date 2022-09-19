#include <stdio.h>
#include "string_utils.h"




int main(){

  char input [1000];

//----------------------------------------------

  while(1){


    printf("\n\n\nZeichenkettenoperationen\n");
    for(int i = 0; i < 33; i++){
      printf("-");
    }

    printf("\n1\tAnzahl zeichen ermitteln\n");
    printf("2\tIn Grossschreibung konvertieren\n");
    printf("3\tReihenfolge umkehren\n");
    printf("4\tAnzahl Wörter ermitteln\n");
    printf("5\tTrennzeichen entfernen\n");
    printf("0\tBeenden\n");

    for(int i = 0; i < 33; i++){
      printf("-");
    }

    int choice;
    printf("\nIhre Auswahl: ");
    scanf("%d", &choice);
    fgets(input, 1000, stdin);
    switch(choice){

      case 0:
        return 0;
        break;

      case 1:
        fgets(input, 1000, stdin);
        printf("\nDer Text ist %d Buchstaben lang", num_chars(input));
        break;

      case 2:
        fgets(input, 1000, stdin);
        to_uppercase(input);
        printf("\n%s\n", input);
        break;

      case 3:
        fgets(input, 1000, stdin);
        invert(input);
        printf("\n%s", input);
        break;

      case 4:
        fgets(input, 1000, stdin);
        printf("\nDer Text hat %d Wörter", num_words(input));
        break;

      case 5:
        break;

      default:
        printf("\n\nFalsche Eingabe.\n\n\n\n");
    }
//----------------------------------------------

  }
  return 0;

}
