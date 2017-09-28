#include <stdio.h>

typedef long long ll;

#define MOD 1000000007

int main( void ){
  ll i,j;
  ll N;
  ll count = 0;
  int u, v;

  scanf( "%lld", &N );

  for( i = 0; i <= 1000; i++ ){
    for( j = 0; j <= 1000; j++ ){
      u = i^j;
      v = i+j;
      if( u <= N && v <= N ){
        printf( "%d %d\n", i, j );
        // printf( "%d %d\n", u, v );
        count++;
      }
    }
  }

  printf( "%lld\n", count );

  return 0;
}

