#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
   char num[1000];
   scanf("%[^\n]", num);
   int i,flag[10]={0};
   
   for(i=0 ; num[i]!='\0' ; i++)
   {
       if(num[i]>=0x30 && num[i]<=0x39)
       {
           flag[(num[i]-'0')]++;
       }
   }
   
   for(i=0 ; i<10 ; i++)
   {
       printf("%d ",flag[i]);
   }     
    return 0;
}
