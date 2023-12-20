#include <stdio.h>

int main()
{
    int x=12345;
    int a=x/1%10,b=x/1000%10;
    int y;
    y=x-a-(1000*b)+(1000*a)+b;
    printf("%d",y);
    return 0;
}
