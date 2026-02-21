#include <stdio.h>
#include <string.h>
#include "crypto.h"

void xorEncrypt(char text[], char key) {
    for(int i = 0; text[i] != '\0'; i++) {
        text[i] = text[i] ^ key;
    }
}