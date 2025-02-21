#include <stdio.h>

/* Constant input of size 2048 */ 
static char input[2048];

int main(int argc, char** argv)
{
  // Print version and exit information
  puts("QLISP Version 0.0.0.0.0.1");
  puts("Press ctrl+c to exit\n");

  // Echo everything in a never ending loop
  while(1){
    //Output 
    fputs("qlisp >", stdout);
    // input
    fgets(input,2048,stdin);
    //Echo 
    printf("No, you are a %s", input);
  }
  return 0;
}
