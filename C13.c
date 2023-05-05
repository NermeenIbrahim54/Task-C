
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int len = 2*n-1 ;
  	for(int i=0;i<len;i++){
          for(int j=0;j<len;j++){
        int x =i<j?i:j;
          x=x<len-i?x:len-i-1;
          x=x<len-j-1?x:len-j-1;

             printf("%d ",n-x);
      }
      printf("\n");
      }
    return 0;
}
