#include <stdio.h>
#include <string.h>
#include "crypto.h"

void vigenereEncrypt(char text[], char key[]) {
    int i, j;
    int keyLen = strlen(key);

    for(i = 0, j = 0; text[i] != '\0'; i++) {
        if(text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = ((text[i] - 'A' + key[j % keyLen] - 'A') % 26) + 'A';
            j++;
        }
    }
}

void vigenereDecrypt(char text[], char key[]) {
    int i, j;
    int keyLen = strlen(key);

    for(i = 0, j = 0; text[i] != '\0'; i++) {
        if(text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = ((text[i] - 'A' - (key[j % keyLen] - 'A') + 26) % 26) + 'A';
            j++;
        }
    }
}