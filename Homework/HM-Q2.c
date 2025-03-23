#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*dairenin alanını ve çevresini bulmak
    1-variableları tanımla
    2-variable typeları bul
    3-formülü tanımla
    4-kullanıcıdan veri al
    5-işlem yap
    6-çıktı ver
    */
    float r,circumference,area;
    const float pi=3.1415;
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    circumference=2*pi*r;
    area=pi*r*r;
    printf("Circumference of the circle:%f\n",circumference);
    printf("Area of the circle:%f\n",area);
    return 0; }
