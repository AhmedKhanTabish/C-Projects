#include <stdio.h>


int main() 
{
  int number_of_values = 0;
  printf("How many values do you want to enter: ");
  scanf("%d", &number_of_values);
  int value = 0;
  int sum = 0;
  int mean_of_value = 0;
  for(int i = 1; i < (number_of_values + 1); i++)
  {
    printf("Please enter %d number: \n", i);
    scanf("%d", &value);
    sum = sum + value;
  }
  mean_of_value = sum / number_of_values;

  printf("Sum of the numbers = %d\n", sum);
  printf("Mean of numbers = %d\n", mean_of_value);
  return 0;
}
