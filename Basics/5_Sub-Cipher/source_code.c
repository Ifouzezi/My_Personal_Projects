#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26

int main() {
    char plaintext[1000], ciphertext[1000];
    char plaintext_alphabet[ALPHABET_SIZE] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char ciphertext_alphabet[ALPHABET_SIZE] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm'};

    printf("Enter a message to Encrypt: ");
    fgets(plaintext, sizeof(plaintext), stdin);
    plaintext[strcspn(plaintext, "\n")] = '\0'; // remove trailing newline character

    // encryption
    for (int i = 0; i < strlen(plaintext); i++) {
        char current_char = plaintext[i];
        int index = -1;
        if (current_char >= 'a' && current_char <= 'z') {
            index = current_char - 'a';
        } else if (current_char >= 'A' && current_char <= 'Z') {
            index = current_char - 'A';
            current_char += 'a' - 'A'; // convert to lower case
        }
        if (index != -1) {
            ciphertext[i] = ciphertext_alphabet[index];
        } else {
            ciphertext[i] = current_char;
        }
    }

    printf("Encrypted message: %s\n", ciphertext);

    // decryption
    for (int i = 0; i < strlen(ciphertext); i++) {
        char current_char = ciphertext[i];
        int index = -1;
        for (int j = 0; j < ALPHABET_SIZE; j++) {
            if (current_char == ciphertext_alphabet[j]) {
                index = j;
                break;
            }
        }
        if (index != -1) {
            plaintext[i] = plaintext_alphabet[index];
        } else {
            plaintext[i] = current_char;
        }
    }

    printf("Decrypted message: %s\n", plaintext);

    return 0;
}
