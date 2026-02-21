#include <stdio.h>
#include <string.h>
#include "crypto.h"

int main() {
    int choice, key;
    char text[100];
    char keyword[100];
    char file1[100], file2[100];
    char xorKey;

    do {
        printf("\n--- SecureCrypt Tool ---\n");
        printf("1. Caesar Cipher\n");
        printf("2. Vigenere Cipher\n");
        printf("3. XOR Encryption\n");
        printf("4. File Encryption (XOR)\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {

        case 1:
            printf("Enter text: ");
            fgets(text, sizeof(text), stdin);
            printf("Enter key: ");
            scanf("%d", &key);
            caesarEncrypt(text, key);
            printf("Encrypted Text: %s\n", text);
            break;

        case 2:
            printf("Enter text (uppercase only): ");
            fgets(text, sizeof(text), stdin);
            printf("Enter keyword (uppercase only): ");
            scanf("%s", keyword);
            vigenereEncrypt(text, keyword);
            printf("Encrypted Text: %s\n", text);
            break;

        case 3:
            printf("Enter text: ");
            fgets(text, sizeof(text), stdin);
            printf("Enter single character key: ");
            scanf(" %c", &xorKey);
            xorEncrypt(text, xorKey);
            printf("Encrypted Text: %s\n", text);
            break;

        case 4:
            printf("Enter input file name: ");
            scanf("%s", file1);
            printf("Enter output file name: ");
            scanf("%s", file2);
            printf("Enter XOR key: ");
            scanf(" %c", &xorKey);
            xorFileEncrypt(file1, file2, xorKey);
            printf("File Encrypted Successfully!\n");
            break;

        }

    } while(choice != 5);

    return 0;
}