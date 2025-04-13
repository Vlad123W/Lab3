#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    // Task 1: Convert meters to centimeters and millimeters  
    float meters;
    printf("\n1. Enter the length in meters: ");
    scanf_s("%f", &meters);
    printf("Centimeters: %.2f cm\n", meters * 100);
    printf("Millimeters: %.2f mm\n", meters * 1000);

    // Task 2: Circle area  
    float radius;
    printf("\n2. Enter the radius of the circle: ");
    scanf_s("%f", &radius);
    float area = M_PI * radius * radius;
    printf("Circle area: %.2f\n", area);

    // Task 3: Convert seconds to h:m:s  
    int total_seconds;
    printf("\n3. Enter the number of seconds: ");
    scanf_s("%d", &total_seconds);
    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;
    printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

    // Task 4: Check if number is even  
    int number;
    printf("\n4. Enter an integer: ");
    scanf_s("%d", &number);
    if (number % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }

    // Task 5: Convert lowercase to uppercase  
    char letter;
    printf("\n5. Enter a lowercase letter of the English alphabet: ");
    scanf_s(" %c", &letter, 1);
    if (letter >= 'a' && letter <= 'z')
    {
        printf("Uppercase letter: %c\n", toupper(letter));
    }
    else
    {
        printf("This is not a lowercase letter of the English alphabet.\n");
    }
}