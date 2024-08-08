# include <stdio.h>
# include "calculator.h"

void takeInput(int* number1, int* number2) {
    printf("Please enter your first number: ");
    scanf("%d", number1);
    printf("\n");
    printf("Please enter your second number: ");
    scanf("%d", number2);
    printf("\n");
}

void menuLoop() {
    int input = 0;
    int number1 = 0;
    int number2 = 0; 

    do
    {
        printf("Please enter a menu selection: ");
        scanf("%d", &input);
        printf("\n");
        switch (input)
        {
            case 1:
                takeInput(&number1, &number2);
                int sum = add(number1, number2);
                printf("%d + %d = %d\n", number1, number2, sum);
                break;
            case 2:
                takeInput(&number1, &number2);
                int difference = subtract(number1, number2);
                printf("%d - %d = %d\n", number1, number2, difference);
                break;
            case 3:
                takeInput(&number1, &number2);
                int product = multiply(number1, number2);
                printf("%d * %d = %d\n", number1, number2, product);
                break;
            case 4:
                takeInput(&number1, &number2);
                int quotient = divide(number1, number2);
                printf("%d / %d = %d\n", number1, number2, quotient);
                break;
            case 5:
                break;
            default:
                printf("Unknown Command, the available commands are:\n\t1. Addition\n\t2. Subtraction\n\t3. Multiplication\n\t4. Division\n\t5. Quit\n");
                break;
        }
    } while (input != 5);
    
}

void startMenu() {
    printf("Menu started\n\n\n");
    menuLoop();
}
