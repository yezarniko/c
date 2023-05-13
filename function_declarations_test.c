#include <stdio.h>


void h(int var) {
}

int fip() { // don't do this
}

// Never declare functions with an empty parameter list in C

int main() {
  int a = 1;
  int b = 'c';
  void* c = &a;

  h(a, b); // this will show error: too many arguments to function ‘h’
  fip(a, b, c); // no errors occurs

  return 0;
}
