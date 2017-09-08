#include "utils.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
  int buf_siz = 255;
  char buf[buf_siz];

  srand(time(NULL));
  int random = rand() % 1024;
  int guess;
  int limit = 5;
  
  ask_question_string("Skriv in ditt namn: ", buf, buf_siz);

  printf("Du %s, jag tänker på ett tal...", buf);
  guess = ask_question_int(" kan du gissa vilket: ");

    
  for (int counter  = 0; counter < limit ; counter++) {
    if (guess> random) {
      puts("För stort! ");
      guess = ask_question_int("Gissa igen: ");
    }else if(guess <random){
      puts("För litet! ");
      guess = ask_question_int("Gissa igen: ");
    }else if(guess == random){
      printf("Det tog %s %d gissningar till att komma framt ill %d\n",buf, counter,random);  
      break;
    }
    if (counter == limit-1) {
      printf("Du har gissat för många gånger, svaret är : %d\n", random);
    }
  }
  
}
