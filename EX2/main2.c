#include <stdio.h>
int main()
{
    
   int i=30;
   if(i%15==0){
       printf("Love IU");
   }
   else if(i%3==0){
       printf("Love");
   }
   else if(i%5==0){
       printf("IU");
   }
   else{
       printf("%d",i);
   }
    return 0;
}
