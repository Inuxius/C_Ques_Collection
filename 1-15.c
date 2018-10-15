#include <stdio.h>
void tempconv(float a);
int main()
{
    float a;
    printf("The temp in celcius ");
    scanf("%f",&a);
    tempconv(a);
}
void tempconv(float a)
{
    printf("temp in fahrenheit %f\n",1.8*a+32);
}
