#include <stdio.h>

int main()
{
    int htoi(char s[]);
    int i;
    char p[100];
    for(i=0; (p[i]=getchar())!=EOF; ++i )
    ;

    p[i]='\0';
    printf("the value of your hex string (i.e. %s) is %d", p, htoi(p));

    return 0;
}

int htoi(char s[]){
  char c,d;
  int n;
  int i;
  int x;
  n=0;
  c=s[0];
  d=s[1];
  if(d=='x'||  d=='X'){
    for(i=2;(c=s[i])!='\0';++i){
      if(c<='9' && c>='0'){
        x=c-'0';
        n=n*16+x;
      }
      if(c>='A' && c<='F'){
        x=c-'A'+10;
        n=n*16+x;
      }
      if(c>='a' && c<='f'){
        x=c-'a'+10;
        n=n*16+x;
      }
    }
  }
  else{
    if(c<='9' && c>='0'){
    x=c-'0';
    n=n*16+x;
    }
    if(c>='A' && c<='F'){
    x=c-'A'+10;
    n=n*16+x;
    }
    if(c>='a' && c<='f'){
    x=c-'a'+10;
    n=n*16+x;
    }
    if(d<='9' && d>='0'){
      x=d-'0';
      n=n*16+x;
    }
    if(d>='A' && d<='F'){
      x=d-'A'+10;
      n=n*16+x;
    }
    if(d>='a' && d<='f'){
      x=d-'a'+10;
      n=n*16+x;
    }
    for(i=2;(c=s[i])!='\0';++i){
      if(c<='9' && c>='0'){
        x=c-'0';
        n=n*16+x;
      }
      if(c>='A' && c<='F'){
        x=c-'A'+10;
        n=n*16+x;
      }
      if(c>='a' && c<='f'){
        x=c-'a'+10;
        n=n*16+x;
      }
    }
  }
  return n;
}
