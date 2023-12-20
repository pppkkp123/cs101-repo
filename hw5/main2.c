#include <stdio.h>

double main()
{
    double i=4,j=1,b=1;
    float PI,count;
    for(j=1;j<=1000000;j=j+2){
        count=i/j;

        if(b!=1){
            count=count*-1;
        }
        PI=PI+count;
        b=b*-1;
    }
    printf(" PI=%.5f",PI);

    
    return 0;
}
