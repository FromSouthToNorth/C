#include <stdio.h>

void f(int **q);

int main() {
  int *p;
  f(&p);
  printf("%d \n", *p); 
  return 0;
}

void f(int **q) {

  int num = 5;
  *q = &num;

}