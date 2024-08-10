#include <stdio.h>

int get_Areaof_Base(int Height, int Length, int Width)
{
    int BaseArea;
    BaseArea = Length * Width;
    return BaseArea;
}

int get_Volumeof_WholeCuboid(int Height, int Length, int Width)
{
    int Volume;
    int Area;
    Area = get_Areaof_Base(Height, Length, Width);
    printf("The Area of the base of Cuboid is %d\n",Area);
    Volume = Area * Height;
    return (Volume);
}

int main()
{
    printf("Hello, world!\n");
    printf("Today We will run a Program to get the volume of a cuboid");
    int Height;
    int Length;
    int Width;
    printf("Please input the dimension of the cuboid in the correct order: ");
    printf("please enter the Height of the cuboid: ");
    scanf("%d", &Height);
    printf("please enter the Length of the cuboid: ");
    scanf("%d", &Length);
    printf("please enter the Width of the cuboid: ");
    scanf("%d", &Width);
    int Final_Answer;
    Final_Answer = get_Volumeof_WholeCuboid(Height, Length, Width);
    printf("The Volume of the Cuboid: %d", Final_Answer);
    return 0;
}
