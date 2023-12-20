#include <stdio.h>

int main()
{
    int x=1,y=1;
    do{
        printf("%d*%d=%d\n",x,y,x*y);
        y++;
        if(y==10){
            y=1;
            x++;
        }
    }while(x<=y||x!=10);
    return 0;
}
