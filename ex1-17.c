#include <stdio.h>
#define MAXLINE 1000




main()
{
  char line[MAXLINE ];

  while (getline(line, MAXLINE) > 80){
    printf("%s\n", line);
  }

}


int getline(char s[], int lim){
  int c,i;
  for (i=0 ; i<(lim-1) && ((c=getchar()) != EOF) && c!='\n'; i++){
    s[i] = c;
  }

  s[i] = '\0';
  return i;
}
