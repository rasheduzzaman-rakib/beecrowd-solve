#include<stdio.h>

int main(){
    float R;

    double VOlUME;

    scanf("%f",&R);

    VOlUME = (4.0/3)*3.14159*(R*R*R);

    printf("VOLUME = %0.3lf\n",VOlUME);

    return 0;

}