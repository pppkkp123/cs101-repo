#include <stdio.h>
int main()
{
   int i=1999;
   if((i%4==0&&i%100!=0)||i%400==0){
       printf("是閏年");
   }
   else{
      printf("不是閏年"); 
   }
   return 0;
}
