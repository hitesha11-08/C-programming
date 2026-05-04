#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    strrev(str);
    printf("Reversed: %s", str);

    return 0;
}
