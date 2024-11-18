#include <stdio.h>
int main() {
    char text[100];
    int shift, i;
    printf("Enter text: ");
    scanf("%[^\n]", text);
    printf("Enter shift (1-25): ");
    scanf("%d", &shift);
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z')
            text[i] = ((text[i] - 'A' + shift) % 26) + 'A';
        else if (text[i] >= 'a' && text[i] <= 'z')
            text[i] = ((text[i] - 'a' + shift) % 26) + 'a';
    }
    printf("Encrypted text: %s\n", text);
    return 0;
}

