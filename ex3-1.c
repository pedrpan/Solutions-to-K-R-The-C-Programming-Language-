#include <stdio.h>

main(){
  int binsearch(int x, int v[], int n);
  int test[100];
  int x = 88;
  int i;

  for(i=0;i<100;++i)
    test[i]=i;

  printf("the location of %d in test[] is %d", x, binsearch(x, test, 100));
}

int binsearch(int x, int v[], int n){
  int low, high, mid;
  low = 0;
  high = n-1;

  while ((low <= high) && (v[(high + low)/2] != x)){
    mid = (high + low)/2;
    printf("v[mid]=%d and mid = %d \n", v[mid], mid );
    if(x<v[mid])
      high=mid-1;
    else
      low=mid+1;
  }

return v[(high+low)/2]==x ? (high+low)/2 : -1;
}
