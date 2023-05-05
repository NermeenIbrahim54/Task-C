#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000] ;
    int i,j,count=0;
    char ch = '0';
    scanf("%[^\n]%s",s);
    int n = strlen(s);
    for(i=0;i<10;i++){
        for(j=0;j<n;j++){
        if(s[j]==ch){
            count++;
        }}
        printf("%d ",count);
        count =0;
        ch++;

        }
    return 0;
}
