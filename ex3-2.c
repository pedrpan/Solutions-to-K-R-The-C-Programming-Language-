#include <stdio.h>

main(){
  void escape(char s[], char t[]);
  char x[] = "slipping  \n with a \t dapa is a \n lappa";
  char g[] = "ggggggggggggggggggggggggggggggggggggggggggggggg";

  escape(g, x);
  printf(g);
}

void escape(char s[], char t[]){
  int i;
  int j=0;

  for(i=0; t[i] != '\0'; ++i)
    switch(t[i]){
      case '\t':
        s[j++]='\\';
        s[j++]='t';
        break;
      case '\n':
        s[j++]='\\';
        s[j++]='n';
        break;
      default:
        s[j++]=t[i];
        break;
  }
  s[j]='\0';
}
