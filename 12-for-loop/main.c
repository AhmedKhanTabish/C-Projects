#include <stdio.h>
#include <stdio.h>
#include <string.h>

void reverseString(char[]);
int countVowelsConsonants(char[]);
int wordCountIndex(char[]);

int main() {
    char inputString[100];  // Define an array to store the input string
    int choice = 0;

    printf("Enter a string: ");
    scanf("%s", inputString);  // Remove the '&' before inputString

    // Display menu and get user choice
    printf("%s\n", inputString);
    printf("String Manipulation Menu:\n");
    printf("1. Reverse the string\n");
    printf("2. Count vowels and consonants\n");
    printf("3. Specialized word count index\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);  // Add '&' before choice to store it correctly

    if (choice == 1) {
        reverseString(inputString);
    } else if (choice == 2) {  // Use 'else if' to check other options
        countVowelsConsonants(inputString);
    } else if (choice == 3) {
        wordCountIndex(inputString);
    } else if (choice == 4) {
        printf("Exiting the program.\n");
    } else {
        printf("Invalid choice. Please try again.\n");
    }

    return 0;
}

void reverseString(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str);
}

int countVowelsConsonants(char str[]) {
    int vowels = 0;
    int consonants = 0;
    int length = strlen(str);
    
    for (int i = 0; i < length; i++) {  // Change the loop condition
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    
    return 0;
}

int wordCountIndex(char str[]) {
    printf("I am Done with it.\n");
    return 0;
}
