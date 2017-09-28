#include <stdio.h>
#include <string.h>

#define MAX 100001

void replace( char str[MAX] );
void replace_reverse( char str[MAX] );
int countup_nico( char str[MAX] );

int main( void ){
  char nico_char[MAX] = {0};
  int max, max_reverse;

  scanf( "%s", nico_char );

  printf("%d\n", countup_nico(nico_char));
  return 0;
}

int countup_nico( char str[MAX] ){
  int i,j;
  int max = 0;
  for( i = 0; i < strlen(str); i+=2 ){
    if( str[i] == '2' || str[i] == '?' ){
      j = 0;
      while( ( i+j+1 < strlen(str) ) &&
          ( str[i+j] == '2' || str[i+j] == '?' ) &&
          ( str[i+j+1] == '5' || str[i+j+1] == '?' ) ) j+=2;
      if( max < j )
        max = j;
      i += j;
    }
  }
  for( i = 1; i < strlen(str); i+=2 ){
    if( str[i] == '2' || str[i] == '?' ){
      j = 0;
      while( ( i+j+1 < strlen(str) ) &&
          str[i+j] == '2' || str[i+j] == '?' &&
          str[i+j+1] == '5' || str[i+j+1] == '?' ) j+=2;
      if( max < j )
        max = j;
      i += j;
    }
  }
  return max;
}

