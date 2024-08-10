
#include <stdio.h>
#include <math.h>

float circle_Parameter_Area(int radius)
{
    float pi = 3.1415;
    float squaredR = radius * radius;
    float area = pi * squaredR;
    float circumference = 2 * pi * squaredR;
    printf("A circle with radius 3 has\n -an area of: %f \n", area);
    printf("-a scope of %f \n", circumference);

}

float main() 
{
    printf("Hello world!\n");
    float value = 2.134;
    printf("value has the value %f \n", value);
    printf("value has the value %.2f \n", value);

    circle_Parameter_Area(3);


    return 0;
}
