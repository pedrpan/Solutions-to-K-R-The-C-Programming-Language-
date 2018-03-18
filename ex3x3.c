#include <stdio.h>

main(){
  void expand(char s1[], char s2[]);
  char x[] = "s q-z d-a \n a \t - G-R is a \n 0-9 9-5";
  char g[] = "gggggggggggggga-zgggggggggggggggggggggggggggggggggpppp";

  expand(x, g);
  printf(x);
  printf("\n");
  printf(g);
}

expand(char s1[], char s2[]){
  int i=0;
  int j=0;
  int p;
  while (s1[i]!='\0')
    if (s1[i]!='-')
      s2[j++]=s1[i++];
    else{
      if (s1[i-1]<s1[i+1] && i!=0 && s1[i+1]!='\0'){
        if ('a'<=s1[i-1] && s1[i+1]<='z')
          for(p=s1[i-1]+1;p<s1[i+1];p++)
            s2[j++]=p;
        if ('A'<=s1[i-1] && s1[i+1]<='Z')
          for(p=s1[i-1]+1;p<s1[i+1];p++)
            s2[j++]=p;
        if ('0'<=s1[i-1] && s1[i+1]<='9')
          for(p=s1[i-1]+1;p<s1[i+1];p++)
            s2[j++]=p;
      }
      ++i;
    }
    s2[j]='\0';
}
