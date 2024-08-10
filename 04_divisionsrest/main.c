#include <stdio.h>

// int main(){
//     printf("Hello world!\n");
//     char first_name = " ";
//     scanf("First Name: %c", first_name);
//     printf("%c", first_name);
//     return 0;
// }

int main() 
{
    //  int value = 0;
    //  printf("Please enter a value: ");
    //  scanf("%d", &value);
    //  printf("You entered: %d", value);
    //  return 0;

    int dividend;
    int divisor;
    int rest;
    int value;
    int counter = 0;
    printf("Please Enter a number for devidend: ");
    scanf("%d", &dividend);
    printf("Please Enter a number for divisor: ");
    scanf("%d", &divisor);
    // value = devidend / divisor;
    // rest = devidend % divisor;
    value = dividend;
    while (value > divisor)
    {
        value = value - divisor;
        rest = value;
        counter = counter + 1;
    }
    
    printf("The number %d comes %d times in the number %d.", divisor, counter, dividend);
    if (rest != 0)
    {
        printf(" rest %d was left ungrouped", rest);
    }
    return 0;
}
