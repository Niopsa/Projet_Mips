#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ecritureFichier.h"
//#include "fonctions.h"


void ecrireFichier(char* instruct){
  //ouverture du fichier
  FILE * fichier;


  fichier = fopen("assembleur_hexa.txt", "a+");

  if(fichier != NULL){ //Vérification que le fichier est bien ouvert
    printf("%d\n", strlen(instruct));
    for(int i = 0; i<strlen(instruct); i++){
      fprintf(fichier, "%c", instruct[i]);
      if(i%2 == 1){
        fprintf(fichier, " ");
      }
    }
    fprintf(fichier, "\n");


    fclose(fichier); //ferme le fichier
  }
  else{
    printf("Erreur lors de l'ouverture du fichier\n");
  }
}


int lireFichier(){
  FILE * fichier;

  int octet;

  fichier = fopen("assembleur_hexa.txt", "r");

  if(fichier != NULL){
    octet = fgetc(fichier);

    while(octet != EOF){

    }
  }
  else{
    printf("Erreur lors de l'ouverture du fichier\n");
  }
}
