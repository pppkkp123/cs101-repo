#include <stdio.h>
int main()
{
   int i=1499;
   if(i<=1500){
       printf("70元");
   }
   else{
       if((i-1500)%100!=0){
           printf("%d元",(((i-1500)/100)*10));
       }
       else{
           printf("%d元",((i-1500)/100));
       }
       
   }
   return 0;
}
