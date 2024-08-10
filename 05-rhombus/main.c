#include <stdio.h>

int main() 
{
    printf("Hello world!\n");
    int size, currentLine = 0, leadingSpaces, middleSpaces;

    printf("Please enter the desired diamond size: ");
    scanf("%d", &size);

    printf("Your diamond:\n");

    // Upper half
    while (currentLine < size) {
    leadingSpaces = size - currentLine - 1;

    for (int i = 0; i < leadingSpaces; i++) {
         printf(" ");
    }
    printf("*");
    if (currentLine > 0) {
        middleSpaces = 2 * currentLine - 1;
        for (int i = 0; i < middleSpaces; i++) {
            printf(" ");
        }
        printf("*");
    }

    printf("\n");
    currentLine++;
    }

    // Lower half
    currentLine = size - 2;
    while (currentLine >= 0) 
    {
    leadingSpaces = size - currentLine - 1;
    for (int i = 0; i < leadingSpaces; i++) {
         printf(" ");
    }

   // Print asterisks
    printf("*");
    if (currentLine > 0) {
         middleSpaces = 2 * currentLine - 1;
        for (int i = 0; i < middleSpaces; i++) {
            printf(" ");
        }
        printf("*");
    }

    printf("\n");
    currentLine--;
    }
    return 0;
}


int main()
{
    int size;
    int middleSpaces;
    int leadingSpaces;
    int currentLine;

    printf("Please enter the desired diamond size: ");
    scanf("%d", &size);

    printf("Your diamond:\n");

    // upper half of diamond
    while (currentLine > size)


    
}