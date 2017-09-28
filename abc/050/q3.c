#include <stdio.h>

// #define MOD 1000000007

typedef long long ll;

#define MAX_NUM 100001

ll MOD = 1e9+7;

ll powLL( ll a, ll b ){
  ll i;
  ll count = 1;
  for( i = 0; i < a; i++ ){
    count = (count%MOD * b%MOD);
  }
  return count%MOD;
}

int main( void ){
  int i;
  int N;
  int A[MAX_NUM] = {0};
  int tmp;
  int flg = 0;

  scanf( "%d", &N );
  for( i = 0; i < N; i++ ){
    scanf( "%d", &tmp );
    A[tmp]++;
  }

  if( N%2 == 1 && A[0] == 1 && A[1] == 0 ){
    for( i = 2; i < N; i+=2 ){
      if( !(A[i] == 2 && A[i+1] == 0) ){
        flg = 1;
        break;
      }
    }
  }else if( N%2 == 0 ){
    for( i = 1; i < N; i+=2 ){
      if( !(A[i] == 2 && A[i-1] == 0) ){
        flg = 1;
        break;
      }
    }
  }else{
    flg = 1;
  }

  if( flg == 0 ){
    // printf( "%lld\n", flg == 0 ? powLL(2,N/2)%MOD : 0 );
    if( N != 1 ){
      printf( "%lld\n", powLL(2,N/2) );
    }else if( A[0] == 1 ){
      printf( "%lld\n", 1 );
    }
  }else{
    printf( "%lld\n", 0 );
  }

  return 0;
}

