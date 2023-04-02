#include <stdio.h>

void message(int n){
  for(int i=0; i<n; i++){
    puts("Hello, world!");
  }
}

int main(int argc, char** argv) {
  //for(int i=0; i < 5; i++)
  /*int i=0;
  while(i<5)
  {
    puts("Bye, world!");
    i++;
  }
  return 0;*/
  message(4);
}
