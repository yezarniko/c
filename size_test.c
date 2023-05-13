#include <stdio.h>
#include <stdbool.h>

#define type_name(expr) \
    (_Generic((expr), \
              char: "char", unsigned char: "unsigned char", signed char: "signed char", \
              short: "short", unsigned short: "unsigned short", \
              int: "int", unsigned int: "unsigned int", \
              long: "long", unsigned long: "unsigned long", \
              long long: "long long", unsigned long long: "unsigned long long", \
              float: "float", \
              double: "double", \
              long double: "long double", \
              void*: "void*", \
              bool: "bool", \
              default: "?"))

int main() {

  bool o = true;
  int a = 1;
  unsigned b = 1;
  short c = 1;
  long d = 1;

  char e = 'c';
  unsigned char f = 'c';

  float g = 1.2;
  double h = 1.2;
  long double i = 1.2;
  
  void* p;

  
  
  printf("%s -> %lu bytes\n", type_name(o), sizeof(o));
  printf("%s -> %lu bytes\n", type_name(a), sizeof(a));
  printf("%s -> %lu bytes\n", type_name(b), sizeof(b));
  printf("%s -> %lu bytes\n", type_name(c), sizeof(c));
  printf("%s -> %lu bytes\n", type_name(d), sizeof(d));
  printf("%s -> %lu bytes\n", type_name(e), sizeof(e));
  printf("%s -> %lu bytes\n", type_name(f), sizeof(f));
  printf("%s -> %lu bytes\n", type_name(g), sizeof(g));
  printf("%s -> %lu bytes\n", type_name(h), sizeof(h));
  printf("%s -> %lu bytes\n", type_name(i), sizeof(i));
  printf("%s -> %lu bytes\n", type_name(p), sizeof(p));
}