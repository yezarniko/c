#include <stdio.h>

void counter() {
  static unsigned int count = 0;
  count++;
  printf("%u\n", count);
}

int main() {

  for(int i=0; i < 5; i++) {
    counter();
  }
  return 0;
}