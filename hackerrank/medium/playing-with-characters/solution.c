#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
  char ch;
    char str[50];
    char sentence[100];

    // Input
    scanf("%c", &ch);               // single character
    scanf("%s", str);               // string (no spaces)
    scanf("\n");                    // consume newline
    scanf("%[^\n]%*c", sentence);   // sentence with spaces

    // Output
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sentence);
        
    return 0;
}
