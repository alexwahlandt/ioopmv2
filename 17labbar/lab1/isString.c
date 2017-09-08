#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int isString(){
  printf("Detta är isString.g\n");
  return 0;
}

bool is_number (char *str){
  for (int i = 0; i < (strlen(str)-1); i++) {
    if (isdigit(str[i])){
      continue;
    }else{
      return false;
    }
  }
  return true;
}


int check_number(int argc, char *argv[]){
  
  //  printf("Strängen är %s och längden är %u\n ", argv[1], strlen(argv[1]));
  
  if (argc > 1 && is_number(argv[1]))
    {
      printf("%s is a number\n", argv[1]);
    }
  else
    {
      if (argc > 1)
        {
          printf("%s is not a number\n", argv[1]);
        }
      else
        {
          printf("Please provide a command line argument!\n");
        }
    }
  return 0;

}
