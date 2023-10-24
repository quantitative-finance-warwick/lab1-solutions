#include <stdio.h>
#include "exercises.h"

/*
printf() is a standard function supported by every C compiler.
The argument to printf is printed to the console.
Create a C-program that prints the following output when executed on two lines.

My first C-program
Can write on two lines
*/
void exercise_1()
{
    printf("My first C-program\n");
    printf("Can write on two lines\n");
}

/*
Write a program that calculates the area of a triangle given the base and height,
and outputs the area to the screen. Use the formula area = (base * height) / 2.
Assume the base and height are positive.

For example, exercise_2(2.0, 10.0) should print
Area of the triangle: 10.000000

*/
void exercise_2(double base, double height)
{
    double area = (base * height) / 2.0;
    printf("Area of the triangle: %f\n", area);
}

/*
Predict the value of each expression and input your answers as the variables.
Use a reference table for operator precedence if you are not sure about the order of operations.
*/

void exercise_3()
{
    // Write your answers here
    int answer1 = 11;
    int answer2 = 1;
    int answer3 = 0;
    int answer4 = 1;

    // The print statements below will all print 1 if your answers are correct
    printf("%d\n", answer1 == (-3 + 4 * 5 - 6));
    printf("%d\n", answer2 == (3 + 4 % 5 - 6));
    printf("%d\n", answer3 == (-3 * 4 % -6 / 5));
    printf("%d\n", answer4 == ((7 + 6) % 5 / 2));
}

/*
Create a C-program that will perform integer division of 10 with any integer provided
and print the result.

For example:

exercise_4(2) will print
“10 divided by 2 is 5”.

The special case, exercise_4(0), should not try and divide. Instead, print:
“Dividing by zero is not supported”.

Hint: use the ‘?’ operator. You can define the function in one line.
*/
void exercise_4(int x)
{
    x ? printf("10 divided by %d is %d\n", x, 10/x) : printf("Dividing by zero is not supported\n");
}

/*
Predict the value of each variable after the operations are performed and input your answers as the variables.
Use a reference table for operator precedence if you are not sure about the order of operations.
*/
void exercise_5()
{
    // Write your answers here
    int answer1 = 10;
    int answer2 = 40;
    int answer3 = 4;
    int answer4 = 4;
    int answer5 = 1;

    int x, y, z;
    x = 2;
    x *= 3 + 2;

    // The print statements below will print 1 if your answers are correct
    printf("%d\n", answer1 == x);

    x *= y = z = 4;
    printf("%d\n", answer2 == x);
    printf("%d\n", answer3 == y);
    printf("%d\n", answer4 == z);

    x = y == z;
    printf("%d\n", answer5 == x);
}

/*
Predict the value of each variable after the operations are performed and input your answers as the variables.
Use a reference table for operator precedence if you are not sure about the order of operations.
*/
void exercise_6()
{
    // Write your answers here
    int answer1 = 3;
    int answer2 = 2;
    int answer3 = 4;

    int x, y, z;
    x = y = z = 1;
    x += y += x;

    // The print statements below will print 1 if your answers are correct
    printf("%d\n", answer1 == ((x < y) ? y : x));
    printf("%d\n", answer2 == ((x < y) ? x++ : y++));
    printf("%d\n", answer3 == ++y);
}