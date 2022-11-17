#include <stdio.h>
#include <stdlib.h>
/**
Task
Complete the function void update(int *a,int *b). It receives two integer pointers, 
int* a and int* b. Set the value of  to their sum, and to their absolute difference. 
There is no return value, and no return statement is needed.
*/


void update(int *a,int *b) {
    // Complete this function     
    /*
    int aa = *a;
    int bb = *b;

    *a = bb + aa;
    *b = abs(bb - aa);
    */
    int temp = *a;
    *a = *b + *a;
    *b = abs(*b - temp);


    //printf("ptr a: %d", aa);
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}