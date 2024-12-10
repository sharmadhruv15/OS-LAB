#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin); 
    
 
    str[strcspn(str, "\n")] = '\0';

    int a, b;
    printf("Enter the starting index: ");
    scanf("%d", &a);
    printf("Enter the last index: ");
    scanf("%d", &b);

    printf("Printing the characters:\n");
    for (int i = a; i <= b; i++) {
        if (str[i] != ' ') { 
            printf("%c\n", str[i]);
        }
    }

    return 0;
}
