#include <stdio.h>
#define MAXLINE 1000




main()
{
  char line[MAXLINE ];
  int x;

  while (x > -1){
    x = getline(line, MAXLINE);
   if(line[0] != '\0'){
        printf("%s\n", line);
   }
  }

}


int getline(char s[], int lim){
  int c,i,j;
  j=0;
  for (i=0 ; i<(lim-1) && ((c=getchar()) != EOF) && c!='\n'; i++){
    if (c != ' '){
        s[j] = c;
        j++;
    }
  }
    s[j] = '\0';
    if(c == EOF){
      return EOF;
    }

  return j;
}
