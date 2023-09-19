#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 100

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch, s[MAX_LEN], sen[MAX_LEN];
    scanf("%c", &ch);
    scanf("\n");
    scanf("%s", s);
    scanf("\n");
    /* [] is the scanset character. */
    /* ^\n stands for taking input until a newline isn't encountered. */
    /* Then, with this %*c, it reads the newline character and here, the used * indicates that this /newline character is discarded. */
    scanf("%[^\n]%*c", sen);
    printf("%c\n%s\n%s\n", ch, s, sen);

    return 0;
}
