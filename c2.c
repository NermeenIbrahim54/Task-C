

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
char ch ;
 scanf("%c",&ch);
 printf("%c\n",ch);
 char s[100];
 scanf("%s=",s);
 scanf("%[^\n]%*c",s);
 printf("%s\n",s);
 char x[100];
  scanf("\n%[^\n]%*c",x);
  printf("%s\n",x);

    return 0;}
