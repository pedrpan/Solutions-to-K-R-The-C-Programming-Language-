#include <stdio.h>

main(){
  int x = 2*2*2*2*2+2;
  printf("%d\n", bitcount(x));
  return 0;
}

int bitcount(unsigned x){
  int b=0;
  while(x){
    x &= x-1;
    ++b;
  }
  return b;
}
