#include <stdio.h>

main(){
  int strrindex(char s[], char t[]);
  char loo[] = "tooky and a pooky is a looky";
  char foo[] = "ook";

  printf("%d", strrindex(loo, foo));
}

int strrindex(char s[], char t[]){
  int i, j, k;
  int best = -1;

  for (i = 0; s[i]!='\0'; i++){
    for (j = i, k=0; t[k]!='\0' && s[j]==t[k]; j++,k++)
      ;
    if (k>0 && t[k]=='\0')
      best = i;
  }
  return best;
}
