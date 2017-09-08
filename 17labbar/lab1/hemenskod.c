#include <stdio.h>
#include <string.h>
void clear_input_buffer()
{
  int c;
      do
        {
          c = getchar();
        }
      while (c != '\n' && c != EOF);
}
int ask_question_int(char *question)
{

  int result = 0;
  int conversions = 0;
  do
    {
      printf("%s\n", question);
      conversions = scanf("%d", &result);
      clear_input_buffer();
      putchar('\n');
    }
  while (conversions < 1);
  return result;
}
/*int read_string(char *buf, int buf_siz)
 {
   
   int count = 0;
   char c;
      do
        {
	  c = getchar();
	  buf[count] = c;
	  count++;
	  //printf("%c", c);
	}
      while (c != '\n' && c != EOF && count != buf_siz-1);
      buf[count + 1] = '\0';
      clear_input_buffer();
      return count;
     
      
      } */
int read_string(char *buf, int buf_siz)
{
  char c;
  for (int i = 0; i < buf_siz-1; i++)
    {
      c = getchar();
      buf[i] = c;
      if ( c == '\n' || c == EOF)
	{
	  buf[i + 1] = '\0';
	  return i;	  
	}
     }
  clear_input_buffer();
  buf[buf_siz] = '\0';
  return buf_siz-1;
}
char *ask_question_string(char *question, char *buf, int buf_siz)
{
  do
    {
      printf("%s\n", question);
    }
  while (read_string(buf,buf_siz) < 1);
  return buf; 
}

int main(void)
{
  char *result;
  char *res = ask_question_string("Skriv en sträng", result, 255);
  printf("%s", res);
  return 0;
}
