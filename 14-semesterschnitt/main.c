#include <stdio.h>


float calculatingAverage(float a[7]);
void printingArrgrades();

int main() 
{
float arr_grades[7] = {0};
    float Average = 0;
    printf("Hello World!\n");
    for(int i = 0; i < 7; i++)
    {
        
        printf("Enter the grades that you have achieved in each of the subjects: \n");
        while(arr_grades[i] > 5.0 || arr_grades[i] < 1.0){
            scanf("%f", &arr_grades[i]);
            fflush(stdin);
            if(arr_grades[i] > 5.0 || arr_grades[i] < 1.0){
                printf("Your Entry was invalid! Please repeat your entry\n");
                continue;
            };
        }
    }
    Average = calculatingAverage(arr_grades);
    printf("your Average is: %.2f \n", Average);
    printingArrgrades(arr_grades);

    return 0;
}


float calculatingAverage(float x[7])
{
    float a = 0;
    float average = 0.0;
    for(int i = 0; i<7; i++){
       a = a + x[i];
    }
    average = a / 7; 
    return average;
}


void printingArrgrades(float y[7])
{
    for(int i = 0; i < 7; i++)
    {
        printf("Your %d Grade array has %f\n", i+1, y[i]);
        
    }
    printf("bye bye");
}