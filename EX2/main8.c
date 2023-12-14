#include <stdio.h>

int main()
{
   int x=-9,y=9,z=1;
   if(x<0){
       x=x*-1;
   }
   if(y<0){
       y=y*-1;
   }
   if(z<0){
       z=z*-1;
   }
   printf("%d",x*100+y*10+z);
   return 0;
}
