#include <stdio.h>

main(){
  unsigned invert(unsigned x, int p, int n);
  unsigned setbits(unsigned x, int p, int n, unsigned y);
  unsigned getbits(unsigned x, int p, int n);
  int x, p, n;
  x=(1 << 9) + (1<< 6) + (1 << 4) + (1 << 3) + 4 + 1;
  p=8;
  n=5;

  printf("x is %d p is %d int b is %d\n", x, p, n);
  printf("int invert(unsigned x, int p, int n) = %d", invert(x, p, n));

  return 0;
}

unsigned invert(unsigned x, int p, int n){
  unsigned setbits(unsigned x, int p, int n, unsigned y);
  unsigned getbits(unsigned x, int p, int n);
  return (setbits(x, p, n, ~getbits(x, p, n) & ~(~0 << n)));
  }

unsigned getbits(unsigned x, int p, int n){
  return((x >> (p+1-n)) & ~(~0 << n));
}

unsigned setbits(unsigned x, int p, int n, unsigned y){
  int z;
  z = x & ~(~0 << (p+1-n));
  y = y & ~(~0 << n);
  x = ((x >> (p+1-n)) & (~0 << n));
  x = x | y;
  x = ((x << (p+1-n)) | z);
  return x;
}
