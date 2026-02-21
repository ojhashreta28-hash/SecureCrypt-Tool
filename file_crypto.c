#include <stdio.h>
#include "crypto.h"

void xorFileEncrypt(char *inputFile, char *outputFile, char key) {
    FILE *in = fopen(inputFile, "rb");
    if(in == NULL) {
        printf("Error opening input file!\n");
        return;
    }

    FILE *out = fopen(outputFile, "wb");
    if(out == NULL) {
        printf("Error creating output file!\n");
        fclose(in);
        return;
    }

    char ch;
    while(fread(&ch, sizeof(char), 1, in)) {
        ch = ch ^ key;
        fwrite(&ch, sizeof(char), 1, out);
    }

    fclose(in);
    fclose(out);
}