#include <stdio.h>
#include <ctype.h>
#include <string.h>

main(){
  double atof(char s[]);
  char x[] = "1.0e-11";

  printf("%f\n", atof(x));
}

double atof(char s[]){
  double exp(int n);
  int atoi(char s[]);
  double val, power;
  int i, sign;
  double befexp;

  for(i=0; isspace(s[i]); i++)
    ;
  sign = (s[i] == '+') ? -1 : 1;
  if (s[i] =='+' || s[i]== '-')
    i++;
  for (val =0.0; isdigit(s[i]); i++)
    val =10.0 * val + (s[i] - '0');
  if (s[i] == '.')
    i++;
  for (power = 1.0; isdigit(s[i]); i++){
    val = 10.0 * val + (s[i] - '0');
    power *= 10.0;
  }
  befexp = sign * val / power;
  if (s[i]=='\0')
    return befexp;
  else if (s[i]=='e' || s[i]=='E'){
    i++;
    if (s[i]=='\0')
      return exp(1) * befexp;
    char t[15];
    int j=0;
    while (s[i]!='\0')
      t[j++]= s[i++];
    t[j]='\0';

    return exp(atoi(t));
  }
}

double exp(int n){
    double fact(int n);
    double power (double m, int n);
    double x=1.0;
    double y=-1.0;
    int i,j;
    double m = (double) n;

    for (i=1; x!=y; ++i){
      y=x, x += power(m,i)/fact(i);
    }

    return x;
}

double fact(int n){
  int i;
  double x=1;

  for(i=1; i<n+1; i++)
    x= i * x;

  return x;
}

double power (double m, int n){
  int i;
  double x=m;

  for (i=1; i<n; i++)
    x*=m;

  return x;
}

int atoi(char s[]){
  int i, n;

  if(s[0]=='-'){
    n=0;
    for (i=1; s[i]>='0' && s[i]<='9'; ++i)
      n = 10 * n + (s[i] - '0');
    return -n;
  }
  else{
    n=0;
    for (i=0; s[i]>='0' && s[i]<='9'; ++i)
      n = 10 * n + (s[i] - '0');
    return n;
  }
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
