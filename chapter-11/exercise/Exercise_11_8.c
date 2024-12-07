#include <stdio.h>
#include <string.h>

void binaryToHexString(char binaryStr[], char hexResult[]) {
    int len = strlen(binaryStr);

    if (len % 4 != 0) {
        printf("Binary length must be divisible by 4.\n");
        return;
    }

    int hexIndex = 0;
    for (int i = 0; i < len; i += 4) {
        int decimalValue = 0;
        
 		// Convert each 4-bit segment to decimal
        for (int j = 0; j < 4; j++) {
            decimalValue = decimalValue * 2 + (binaryStr[i + j] - '0');  // Convert char to int
        }

        // Map decimal value to hexadecimal character
        if (decimalValue < 10) {
            hexResult[hexIndex] = '0' + decimalValue;  // 0-9
        } else {
            hexResult[hexIndex] = 'A' + (decimalValue - 10);  // A-F
        }

        hexIndex++;
    }
    hexResult[hexIndex] = '\0';  
}

int main() {
    char binaryStr[50];  
    char hexResult[20];  
	printf("Equivalent Binary number \t");
	scanf("%s", binaryStr);
    binaryToHexString(binaryStr, hexResult);

    printf("Hexadecimal Number %15s\n", hexResult);
    return 0;
}
