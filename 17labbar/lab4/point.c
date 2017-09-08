#include<stdio.h>

typedef struct point point_t;

struct point{
  int x;
  int y;
};

int main(){
  point_t p;
  p.x = 2;
  p.y =5;
  printf("punkt: (%d,%d)\n",p.x,p.y );

  point_t p2 = {.x = 102, .y=250};
  printf("punkt: (%d,%d)\n",p2.x,p2.y );  
}
