#include <stdio.h>
#include "utils.h"

void clear_input_buffer(){
  int c;
  do
    {
      c = getchar();
    }
  while (c != '\n' && c!=EOF);
  putchar('\n');
     
}

// Retunerar din int
int ask_question_int(char *question){
  int result = 0;
  int conversions = 0;
  do
    {
      printf("%s\n", question);
      conversions = scanf("%d", &result);
      clear_input_buffer();

    }
  while (conversions < 1);
  return result;

}

// Retunerar antalet lästa karaktärer 
int read_string(char *buf, int buf_size){
  int c;
  int count;
  for (count = 0; count < buf_size ; count++) {
    c = getchar();
    if (c != '\n' && c !=EOF) {
      buf[count] = c;
    }else{
      buf[count] = '\0';
      return count;
    }
  }
  
  clear_input_buffer();
  buf[buf_size] = '\0';
  
  return count;
}

char *ask_question_string(char *question, char *buf, int buf_size){
  int read;
  do{
    printf("%s\n", question);
    read = read_string(buf,buf_size);
  }while(read == 0);
  
  return buf;
}


/*
int main(void)
{
  int buf_siz = 255;
  // int read = 0;
  char buf[buf_siz];

  ask_question_string("Hej! Vad heter du: ", buf, buf_siz);

  printf("Ditt svar är : %s\n", buf);
  
  return 0;
}

*/
