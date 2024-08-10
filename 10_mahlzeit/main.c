#include <stdio.h>
#include  <conio.h>
#include   <stdbool.h>
#include    <string.h>
#include     <math.h>

int get_user_choice(int greatest_numbers_of_options);
void print_vorspeisen(void);
void print_vorspeisen_item_selected(int item_number);
void print_nachspeisen(void);
void print_nachspeisen_item_selected(int item_number);
void print_hauptspeisen(void);
void print_hauptspeisen_item_selected(int item_number);
void print_suppen(void);
void print_suppen_item_selected(int item_number);



int main() 
{
    print_vorspeisen();
    int vorspeise = get_user_choice(3);
    printf("You've chosen: ");
    print_vorspeisen_item_selected(vorspeise);
    printf("\n");

    print_suppen();
    int suppe = get_user_choice(2);
    printf("You've chosen: ");
    print_suppen_item_selected(suppe);
    printf("\n");

    print_hauptspeisen();
    int hauptspeise = get_user_choice(3);
    printf("You've chosen: ");
    print_hauptspeisen_item_selected(hauptspeise);
    printf("\n");
    
    print_nachspeisen();
    int nachspeise = get_user_choice(4);
    printf("You've chosen: ");
    print_nachspeisen_item_selected(nachspeise);
    printf("\n");

    return 0;
}


void print_vorspeisen(void)
{
    printf("Choose your Vorspeise:\n\n");
    printf("suppe: 1\n");
    printf("Chocolate: 2\n");
    printf("nichts: 3\n");
}


void print_suppen(void)
{
    printf("Choose your Suppe:\n\n");
    printf("Tomatensuppe: 1\n");
    printf("Kuerbiscremesuppe: 2\n");
}


void print_hauptspeisen(void)
{
    printf("Choose your Hauptspeise:\n\n");
    printf("Schweinberaten: 1\n");
    printf("Leberkaesesemmel: 2\n");
    printf("Nichts: 3\n");
}


void print_nachspeisen(void)
{
    printf("Choose your Nachspeise:\n\n");
    printf("Pudding: 1\n");
    printf("Schokolade: 2\n");
    printf("Schweineberaten: 3\n");
    printf("Nichts: 4\n");
}



int get_user_choice(int greatest_numbers_of_options)
{
    int selection = 0;
    printf("Your Selection Please: \n");
    scanf("%d", &selection);
    fflush(stdin);
    if (selection > greatest_numbers_of_options)
    {
        printf("Invalid Input. Please dial again");
    }
    return selection;
}


void print_vorspeisen_item_selected(int item_number)
{
    switch(item_number) 
    {
        case 1:
            printf("suppe\n");
            break;
        case 2:
            printf("Chocolate\n");
            break;
        case 3:
            printf("nichts\n");
            break;
        default:
            printf("an invalid selection\n");
            break;
    }
}


void print_suppen_item_selected(int item_number)
{
    switch(item_number) 
    {
        case 1:
            printf("Tomatensuppe\n");
            break;
        case 2:
            printf("Kuerbiscremesuppe\n");
            break;
        default:
            printf("an invalid selection\n");
            break;
    }
}


void print_hauptspeisen_item_selected(int item_number)
{
   switch(item_number) 
    {
        case 1:
            printf("Schweinberaten\n");
            break;
        case 2:
            printf("Leberkaesesemmel\n");
            break;
        case 3:
            printf("nichts\n");
            break;
        default:
            printf("an invalid selection\n");
            break;
    } 
}


void print_nachspeisen_item_selected(int item_number)
{
   switch(item_number) 
    {
        case 1:
            printf("Pudding\n");
            break;
        case 2:
            printf("Schokolade\n");
            break;
        case 3:
            printf("Schweineberaten\n");
            break;
        case 4:
            printf("nichts\n");
            break;
        default:
            printf("an invalid selection\n");
            break;
    } 
}