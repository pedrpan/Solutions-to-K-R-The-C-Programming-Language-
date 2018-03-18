#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = getline(line, MAXLINE)) > 0){
    if (len > max){
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0){
    printf("%s ", longest);
    printf("\n%d", max);
  }
}

int getline(char s[], int lim){
  int c,i;
  for (i=0 ; i<(lim-1) && ((c=getchar()) != EOF) && c!='\n'; i++){
    s[i] = c;
  }
  if (i==lim-1){
    while ((c=getchar()) !='\n' && (c=getchar()) != EOF){
      i++;
    }
  }
  if (c == '\n'){
      s[i] = '\n';
      i++;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]){
  int i;

  i=0;
  while ((to[i] = from[i]) != '\0'){
    i++;
  }
}
