#include <stdio.h>

main(){
  int lower(int c);
  int c;
  c=getchar();
  printf("%c\n", lower(c));
}

int lower (int c){
  return c >= 'A' && c <= 'Z' ? (c = c - 'A' + 'a') : c;
}
