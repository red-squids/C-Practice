#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char s[100];
    char sen[100];

    /* 1. Read/Print character ch in the first line */
    scanf("%c", &ch);
    printf("%c\n", ch);
    /* 2. Read/Print s in the next line */
    scanf("%s", &s);
    printf("%s\n", s);
    /* 3. Read/Print the sentence 'sen' in the last line*/
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%s", sen);
        
    return 0;
}
