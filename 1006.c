#include <stdio.h>

int main()
{

    double x,y,z,MEDIA;
    scanf("%lf",&x);
    scanf("%lf",&y);
    scanf("%lf",&z);
    x = x * 2;
    y = y * 3;
    z = z * 5;
    MEDIA = (x+y+z)/10;
    printf("MEDIA = %.1lf\n",MEDIA);
    return 0;
}
