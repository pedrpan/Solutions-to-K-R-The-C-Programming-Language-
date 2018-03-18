#include <stdio.h>

int main()
{
    int setbits(int x, int p, int n, int y);
    int x, y, n, p;
    x=(1 << 9) + (1<< 6) + (1 << 4) + (1 << 3) + 4 + 1;
    y=7;
    p=8;
    n=3;

    printf("x is %d p is %d int n is %d int y is %d\n", x, p, n, y);
    printf("setbits(x, p, n, y) = %d", setbits(x, p, n, y));


    return 0;
}

int setbits(int x, int p, int n, int y){
  int z;
  z = x & ~(~0 << (p+1-n));
  y = y & ~(~0 << n);
  x = ((x >> (p+1-n)) & (~0 << n));
  x = x | y;
  x = ((x << (p+1-n)) | z);
  return x;
}
