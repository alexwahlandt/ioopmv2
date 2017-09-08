#include <stdbool.h>
#include <stdio.h>
#include "isString.h"



int main (int argc, char *argv[]){

  printf("välkommen till mitt programm, du har skrivit följande: %s\n",argv[1]);

  check_number(argc, argv);
  
  return 0;
}


