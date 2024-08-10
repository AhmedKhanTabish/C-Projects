#include <stdio.h>

float get_Input()
{
    float Radius;
    printf("Please enter the radius: ");
    scanf("%f", &Radius);
    return Radius;
}

float get_Area(float radius_input)
{
    float area;
    area = 3.14 * radius_input * radius_input;
    return area;
}

float get_Scope(float radius_input)
{
    float scope;
    scope = 2 * 3.14 * radius_input;
    return scope;
}

float give_Output(float radius_input, float scope_Calculated, float area_Calculated)
{
    printf("The Radius of the circle is %f, the scope of the circle is %f, the area of the circle is %f", radius_input, scope_Calculated, area_Calculated);
}


int main() 
{
    printf("Hello world!\n");
    float radius_input = get_Input();
    float scope_Calculated = get_Scope(radius_input);
    float area_Calculated = get_Area(radius_input);
    give_Output(radius_input, scope_Calculated, area_Calculated);
    return 0;
}
