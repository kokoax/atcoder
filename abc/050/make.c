#include <stdio.h>

int main( void ){
  int i;
  int n;
  scanf( "%d", &n );

  printf( "%d\n", n*2+1 );
  printf( "0 " );
  for( i = 1; i <= n; i++ ){
    printf( "%d %d ",i*2, i*2);
  }

  return 0;
}

