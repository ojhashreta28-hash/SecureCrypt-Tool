void caesarEncrypt(char text[],int key);
void caesarDecrypt(char text[],int key);

void vigenereEncrypt(char text[],char key[]);
void vigenereDecrypt(char text[],char key[]);

void xorEncrypt(char text[],char key);
void xorFileEncrypt(char *inputFile,char *outputFile,char key);