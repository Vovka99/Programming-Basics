#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, x;
    int result;
    char choice;


    do {
        // Only for Windows
        system("cls");

        printf("=== Check if the brick fits into the square hole ===\n");
        
        printf("Enter the sides of the brick (three positive numbers): ");
        result = scanf("%f %f %f", &a, &b, &c);

        if (result != 3 || a <= 0 || b <= 0 || c <= 0)
        {
            printf("Error: Incorrect input values for the brick.");
            return 1;
        }

        printf("Enter the side length of the square hole (positive number): ");
        result = scanf("%f", &x);

        if (result != 1 || x <= 0)
        {
            printf("Error: Incorrect input value for the hole.");
            return 1;
        }

        if ((a <= x && b <= x) ||
            (a <= x && c <= x) ||
            (b <= x && c <= x))
        {
            printf("The brick CAN pass through the hole.\n");
        }
        else
        {
            printf("The brick CANNOT pass through the hole.\n");
        }

        // Clear input buffer
        while (getchar() != '\n');

        printf("Do you want to check another brick? (Y/N): ");
        choice = getchar();

    } while (choice == 'Y' || choice == 'y');

    printf("Program ended.\n");
}
