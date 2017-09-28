#include <stdio.h>

typedef long long ll;

void swap( int *a, int *b ){
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main( void ){
  int i,j;
  int N;
  int T[100];
  int M;
  int p, x;

  int sum = 0;

  scanf("%d", &N);
  for(i = 0; i < N; i++){
    scanf("%d", &T[i]);
  }
  scanf("%d", &M);
  for(i = 0; i < M; i++){
    scanf("%d %d", &p, &x);
    sum = 0;
    for(j = 0; j < N; j++ ){
      // printf( "T[%d] = %d ", j, T[j] );
      if( j != p-1 ){
        sum += T[j];
      }else{
        sum += x;
      }
    }
    printf( "%d\n", sum );
  }

  return 0;
}

