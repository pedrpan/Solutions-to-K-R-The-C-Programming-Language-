#include <stdio.h>
#include <string.h>

main(){
  void itoa(int n, char s[], int b);
  void itoa1(int n, char s[], int b);
  void reverse(char s[]);
  int twotothe(int n);
  int wordsize();
  void multiby2(char s[], int b);
  int b = 20;
  int x = 11+20*11;
  char numby[] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";

  itoa(x, numby, b);
    printf(numby);
    printf("\n");
  multiby2(numby, b);
    printf(numby);
    printf("\n");
  itoa(-x, numby, b);
    printf(numby);
    printf("\n");
  multiby2(numby, b);
    printf(numby);
}



void itoa(int n, char s[], int b){
  void itoa1(int n, char s[], int b);
  void reverse(char s[]);
  int twotothe(int n);
  int wordsize();
  void multiby2(char s[], int b);

  if (n != -twotothe(wordsize()-1) && n != twotothe(wordsize()-1) )
    itoa1(n, s, b);
  else{
    itoa1(-twotothe(wordsize()-2), s, b);
    multiby2(s, b);
  }
}

void multiby2(char s[], int b){
  int x, y;
  int i =0;
  void reverse(char s[]);
  int r[strlen(s)-1];

  reverse(s);
  while (s[i]!='\0'){
    if ((x=s[i]-'0')>=0 && x < 9 ){
      if (2 * x < b)
        r[i]=0, s[i++] = '0' + 2 * x;
      else
        r[i]=1, s[i++] = '0' + ((2 * x) % b);
    }
    else if (s[i]>= 'a' && s[i]<='z'){
        y=s[i]-'a';
        if (2 * (10 + y) < b)
          r[i]=0, s[i++] = 'a' + 10 + 2 * y;
        else {
          if ((2 * (10 + y) % b) > 9)
            r[i]=1, s[i++] = 'a' + (2 * (10 + y) % b) - 10;
          else
            r[i]=1, s[i++] = '0' + (2 * (10 + y) % b);
        }
    }
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



void itoa1(int n, char s[], int b){
  int i, j, sign;
  void reverse(char s[]);

  if ((sign = n) < 0)
    n = -n;
  i=0;
  do {
    j = n % b;
    s[i++] = j <= 9 ? j + '0' : j + 'a' - 10;
  } while ((n /= b ) > 0);
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
