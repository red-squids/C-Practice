#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
Task

Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

1. Declare  variables: two of type int and two of type float.
2. Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
3. Use the  and  operator to perform the following operations:
    a. Print the sum and difference of two int variable on a new line.
    b. Print the sum and difference of two float variable rounded to one decimal place on a new line.

* Print the sum and difference of both integers separated by a space on the first line, and the sum and difference 
of both float (scaled to  decimal place) separated by a space on the second line.

Sample Input:
10 4
4.0 2.0

Sample Output:
14 6
6.0 2.0

*/

int main()
{
	int num1, num2, sumInts, diffInts;
    float num3, num4, sumFloats, diffFloats;
    
    //printf("Enter two integers:\n"); /* Autograde didnt like the printf's */
    scanf("%d %d", &num1, &num2);
    sumInts = num1 + num2;
    diffInts = num1 - num2;

    //printf("Enter two floats:\n"); /* Autograde didnt like the printf's */
    scanf("%f %f", &num3, &num4);
    sumFloats = num3 + num4;
    diffFloats = num3 - num4;

    printf("%d %d\n", sumInts, diffInts);
    printf("%.1f %.1f\n", sumFloats, diffFloats);


    return 0;
}