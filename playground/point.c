#include <stdio.h>
#include <math.h>
typedef struct  {
  float x;
  float y;
} point;

int main(){
  point p;
  p.x = 0.1;
  p.y = 10.0;

  float length = sqrt(p.x*p.x+p.y*p.y);
  printf("Length: %f\n",length);

  return 0;
}
