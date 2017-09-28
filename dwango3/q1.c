#include <stdio.h>

int main( void ){
  int n, a, b;
  int bigger;
  scanf( "%d %d %d", &n, &a, &b);

  printf( "%d\n", a+b>n ? a+b-n : 0 );

  return 0;
}

