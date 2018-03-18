#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[], int length);

main()
{
  int len;
  char line[MAXLINE];
  char reversed[MAXLINE];

  while (len >= 0){
      len = getline(line, MAXLINE);
      copy(reversed, line, len);
      printf("%s\n", reversed);
  }

}

int getline(char s[], int lim){
  int c,i;
  for (i=0 ; i<(lim-1) && ((c=getchar()) != EOF) && c!='\n'; i++){
    s[i] = c;
  }
  ++i;
  s[i] = '\0';
  if(c == EOF){
    return EOF;
  }
  return i;
}

void copy(char to[], char from[], int length){
  int i,j;

  i=length;
  if (length == -1){
      while(from[length+1] != '\0'){
          ++length;

      }
    i=length+3;
  }
  j=0;
  while (j < (length-1)){
    to[j] = from[i-2];
    i--;
    j++;
  }
  to[j] = '\0';
}
