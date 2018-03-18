#include <stdio.h>

int main()
{
    int any(char s1[], char s2[]);
    char poopy[] = "Haibin loves Pedro for ever and ever and ever and well she will kepp loving for all n";
    char doopy[] = "nepr";

    printf("string 1 is \n%s\nstring 2 is \n%s\n", poopy, doopy);
    printf("and the first location in s1 that has a char from s2 is \n%d", any(poopy, doopy));

    return 0;
}


int any(char s1[], char s2[]){
  int i,j,b;
  i=0;
  b=1;
  while(s1[i]!='\0' && b==1){
    for(j=0;s2[j]!='\0' && b==1 ;++j){
      if(s1[i]==s2[j]){
        b=0;
      }
    }
    ++i;
  }
  if(b==1){
    return -1;
  }
  if(b==0){
    return i;
  }
}
