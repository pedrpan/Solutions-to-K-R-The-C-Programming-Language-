#include <stdio.h>

main(){
    unsigned rightrot(unsigned x, int n);
    unsigned setnthbit(unsigned x, int n, int b);
    unsigned x = 1;
    int n = 31;
    int b =1;

  printf("the value of rightrot(unsigned x, int n) = %d", rightrot(x, n) );

  return 0;
}

unsigned rightrot(unsigned x, int n){
  int sizeofint();
  unsigned setnthbit(unsigned x, int n, int b);

  int s = sizeofint()-1;
  int i;
  int b;

  for(i=0; i<n; i++){
    b = (x & 1);
    x = (x >> 1);
    x = setnthbit(x, s, b);
  }
  return x;
}


unsigned getnthbit(unsigned x, int n){
  return((x >> n) & 1);
}

unsigned setnthbit(unsigned x, int n, int b){
  unsigned getnthbit(unsigned x, int n);
  if(b==1){
    if(getnthbit(x, n)==0){
      x =  x | (1 << n);
    }
  }
  if(b==0){
    if(getnthbit(x,n)==1){
      x = x & ~(1 << n);
    }
  }
  return x;
}

int sizeofint(){
  int x = 2;
  int y = 1;
  int i = 2;

  while(y<x){
      x=2*x;
      y=2*y;
      ++i;
  }

  return i;
}
