#include <stdio.h>

// Buffer size
static char input[2048];

int main(int argc, char** argv) {

  // version and exit info
  puts("lispy version 0.0.1");
  puts("press Ctrl+c to exit\n");

  // editing loob
  while(1) {

    //output prompt
    fputs("lispy> ", stdout);

    //input from user
    fgets(input, 2048, stdin);

    // echo bach to the user
    printf("echo:%s", input);
  }
  return 0;
}

