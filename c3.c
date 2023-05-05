#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,m;
    float x,y ;
    scanf("%d %d",&n,&m);
     scanf("%f %f",&x,&y);
     int sum1 = n+m ;
     int diff = n-m ;
     printf("%d %d\n",sum1,diff);
     printf("%.1f %.1f" , (x+y),(x-y));
    return 0;
}
