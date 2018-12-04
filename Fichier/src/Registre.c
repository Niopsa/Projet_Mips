

#include <stdio.h>
#include <stdlib.h>
#include "Registre.h"


void Init(Registre* reg){

  (*reg).mem = malloc(sizeof(int)*32);
  (*reg).zero = (*reg).mem+0;
  (*reg).at = (*reg).mem+1;
  (*reg).v = (*reg).mem+2;
  (*reg).a = (*reg).mem+4;
  (*reg).t1 = (*reg).mem+8;
  (*reg).s = (*reg).mem+16;
  (*reg).t2 = (*reg).mem+24;
  (*reg).k = (*reg).mem+26;
  (*reg).gp = (*reg).mem+28;
  (*reg).sp =(*reg).mem+29;
  (*reg).fp = (*reg).mem+30;
  (*reg).ra = (*reg).mem+31;
  for(int i = 0; i<32;i++){*((*reg).mem+i) = 0;}


}


int LireRegistre(Registre* reg,int c){
  return(*((*reg).mem+c));
}



void EcrireRegistre(Registre* reg, int R, int val){
  if(R <26){*((*reg).mem+R) = val;}
  else{printf("vous n'avez pas le droit d'ecrire la");}
  *((*reg).mem+0) = 0;
}