#include <stdio.h>
// This is just a practice file where I play around with conditionals and 
// loops from Chapter 3 of Build Your Own Lisp book.
int main(){
  int x=74;

  // Conditional Example
  if (x>10 && x<100){
    puts("x is between 10 and 100");
  }
  else{
    puts("x is not between 10 and 100");
  }

  int i=10;

  // While Loop Example
  while (i>0){
    puts("Loops 10 times");
    i=i-1;
    printf("%i\n", i);
  }

  for(int i=0; i<10; i++){
    puts("For loop example");
  }

  return 0;
}
