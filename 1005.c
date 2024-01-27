#include <stdio.h>

int main()
{

    double x,y,MEDIA;
    scanf("%lf",&x);
    scanf("%lf",&y);
    x = x * 3.5;
    y = y * 7.5;
    MEDIA = (x+y)/11;
    printf("MEDIA = %.5lf\n",MEDIA);
    return 0;
}