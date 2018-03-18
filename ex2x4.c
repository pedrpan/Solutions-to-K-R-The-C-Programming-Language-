#include <stdio.h>

int main()
{
    void squeeze(char s1[], char s2[]);
    char poopy[] = "Haibin loves Pedro for ever and ever and ever and well she will kepp loving for all n";
    char doopy[] = "nepr";

    printf("string 1 is \n%s\nstring 2 is \n%s\n", poopy, doopy);
 squeeze(poopy, doopy);
    printf("and squeeze creates \n%s", poopy);

    return 0;
}


void squeeze(char s1[], char s2[]){
  int i,j,k,b;
  i=k=0;
  b=1;
  while(s1[i]!='\0'){
    for(j=0;s2[j]!='\0';++j){
      if(s1[i]==s2[j]){
        b=0;
      }
    }
    if(b==1){
      s1[k++]=s1[i++];
    }
    else{
      b=1;
      ++i;
    }
  }
    s1[k]=s1[i];
}
