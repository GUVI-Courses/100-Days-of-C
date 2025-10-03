#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\n----- Sphere----\n\n");

    const double pi = 3.14;
    double r;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &r);
    printf("\n");

    double surface = 4 * pi * r * r;
    double volume = 4/3 * pi * r * r * r;

    printf("Decimal : \n");
    printf("radius : %.2f\n",r);
    printf("surface : %.2f\n",surface);
    printf("volume : %.2f\n",volume);
    printf("\n");

    printf("Scientific : \n");
    printf("radius : %.3e\n",r);
    printf("surface : %.3e\n",surface);
    printf("volume : %.3e\n",volume);
    printf("\n");


}