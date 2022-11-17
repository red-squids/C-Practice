#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

/*
Task

    1. Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

Note:
There is not built in max function in C. Code that will be reused is often put in a separate function, e.g. int max(x, y) that returns the greater of the two values.

Input Format

Input will contain four integers - a, b, c, d one on each line.

Output Format
Print the greatest of the four integers.
Note: I/O will be automatically handled.

Sample Input:
3
4
6
5

Sample Output:
6

*/

int max_of_four(int a, int b, int c, int d)
{
    /**
     *  Accepts four ints and returns the largest.
     * This function is awful, and runs in (0)1.
    */
   int max = 0;
   int max1 = 0; 
   int max2 = 0;

    // first set
    if (a > b){
        max1 = a;
   } else {
        max1 = b;
   }

    // second set
    if (c > d){
        max2 = c;
   } else {
        max2 = d;
   }
    
    //final comparison
    if (max1 > max2){
        max = max1;
    } else {
        max = max2;
    }
   
   return max;

}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}