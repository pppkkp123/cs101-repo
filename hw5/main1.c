#include <stdio.h>

int main()
{
    int i,j=4;
    int spc;
    for(i=1;i<=j;i++){
        spc=j-i+1;
        printf("%*d",spc,i);
        for(int a=1;a<i;a++){
            printf(" %d",i);
        }
        printf("\n");
    }

    return 0;
}
