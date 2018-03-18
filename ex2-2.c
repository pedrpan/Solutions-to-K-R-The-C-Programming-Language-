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
  }
  return 0;
}

/*

for (i=0 ; i<(lim-1) && (c=getchar()) != EOF && c!='\n'; i++){
  s[i] = c;
}



 */

int getline(char s[], int lim){
  int c,i;
  int x;
  i=0;
  x=1;


  while(x==1){
    c=getchar();
    if(c != EOF){
      if(c != '\n'){
        s[i]=c;
        ++i;
      }
    }
    if(c == EOF){
      x=0;
    }
    if(c == '\n'){
      x=0;
    }
    if(i==lim-1){
      x=0;
    }
  }

  if (c == '\n'){
      s[i] = c;
      ++i;
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
