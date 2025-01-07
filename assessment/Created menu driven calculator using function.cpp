#include <stdio.h>

int Addition(int a, int b);
int Substraction(int a, int b);
int Multiplication(int a, int b);
float Division(int a, int b);

main() 
{
    int a, b, choice;

    printf("---------------------------Created menu-driven calculator using functions---------------------------\n");
    
    printf("\nEnter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);

    do 
	{
        printf("\nSelect Option:\n");
        printf("1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
		{
            printf("Addition: %d\n", Addition(a, b));
        } 
		else if (choice == 2) 
		{
            printf("Substraction: %d\n", Substraction(a, b));
        } 
		else if (choice == 3) 
		{
            printf("Multiplication: %d\n", Multiplication(a, b));
        } 
		else if (choice == 4) 
		{
            if (b != 0) 
			{
                printf("Division: %.2f\n", Division(a, b));
            } 
			else 
			{
                printf("Error: Division by zero is not allowed.\n");
            }
        } 
		else if (choice == 5) 
		{
            printf("Exiting the program. Thank you!\n");
        } 
		else 
		{
            printf("Invalid choice! Please try again.\n");
        }

    } 
	while (choice != 5);

    return 0;
}

int Addition(int a, int b) 
{
    return a + b;
}

int Substraction(int a, int b) 
{
    return a - b;
}

int Multiplication(int a, int b) 
{
    return a * b;
}

float Division(int a, int b) 
{
    return (float)a / b;
}

