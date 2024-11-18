#include <stdio.h>
int main() {
    char plaintext[100], ciphertext[100];
    char plaintextAlphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char ciphertextAlphabet[] = "qwertyuiopasdfghjklzxcvbnm";
    int i, j;
    printf("Enter plaintext (lowercase only): ");
    scanf("%s", plaintext);
    for (i = 0; plaintext[i] != '\0'; i++) {
        for (j = 0; j < 26; j++) {
            if (plaintext[i] == plaintextAlphabet[j]) { 
                ciphertext[i] = ciphertextAlphabet[j];
                break;
            }
        }
    }
    ciphertext[i] = '\0';
    printf("Encrypted text: %s\n", ciphertext);
    return 0;
}

