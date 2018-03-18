#include <stdio.h>
#include <string.h>

main(){
  void itoa(int n, char s[]);

  char numby[] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
  itoa(-twotothe(wordsize()-1), numby);
    printf(numby);
}



void itoa(int n, char s[]){
  void itoa1(int n, char s[]);
  void reverse(char s[]);
  int twotothe(int n);
  int wordsize();
  void multiby2(char s[]);

  if (n != -twotothe(wordsize()-1) && n != twotothe(wordsize()-1) )
    itoa1(n, s);
  else{
    itoa1(-twotothe(wordsize()-2), s);
    multiby2(s);
  }
}

void multiby2(char s[]){
  int x;
  int i =0;
  void reverse(char s[]);
  int r[strlen(s)-1];

  reverse(s);
  while (s[i]!='\0'){
    if ((x = s[i]-'0') >= 0 && x < 5)
      r[i]=0, s[i++] = '0' + 2 * x;
    else if (x > 4 && x <= 9)
      r[i]=1, s[i++] = '0' + ((2 * x) % 10);
    else
      ++i;
  }
  for(i=1; s[i]!='\0' && s[i]!='-'; ++i)
    s[i] += r[i-1];
  if (r[i-1]==1 && s[i]=='\0')
    s[i++]='1', s[i]='\0';
  if (r[i-1]==1 && s[i]=='-')
    s[i++]='1', s[i++]='-', s[i]='\0';
  reverse(s);
}



void itoa1(int n, char s[]){
  int i, sign;
  void reverse(char s[]);

  if ((sign = n) < 0)
    n = -n;
  i=0;
  do {
    s[i++] = n % 10 + '0';
  } while ((n /= 10 ) > 0);
  if (sign < 0)
    s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

void reverse(char s[]){
  int c, i, j;

  for (i=0, j=strlen(s)-1;i<j;i++,j--){
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}

int twotothe(int n){
  int x=1;
  int i;

  for (i = 0; i < n; ++i)
    x=2*x;

  return x;
}

int wordsize(){
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
