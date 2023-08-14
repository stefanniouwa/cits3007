#include <stdlib.h>
#include <stdio.h>
    
int buf[1024];

int main() {
  printf("%d\n", buf[1023]);
  return 0;
}